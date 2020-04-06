#include<stdio.h>
#include<conio.h>
#include<time.h>


int i,n,sum=0,m,o,b,s,summ=0,x;
char pone[100],ptwo[100]="MADHU";
int main()
{
    printf(__FILE__);
    printf("\n");
    printf("WELCOME TO HAND CRICKET MATCH..!!!!\n");
    printf("\n");
    printf("Enter Batsman name:\n");
    gets(pone);
    printf("\n");
  //  printf("Enter Bowler name:\n");
   // gets(ptwo);
    printf("\n");

    printf("BATSMAN : %s\t",pone);
    printf("\n");
    printf("BOWLER : %s\n",ptwo);
    printf("\n");

    printf("Enter the number of overs you would like to play\n");
    scanf("%d",&o);
    printf("\n");
    b=(o*6);
    s=b;
    x=b;
    for(i=0;i<b;i++)
    {
        printf("number of balls left:%d\n",s);
        printf("\n");
        printf("%s:\n",pone);
        scanf("%d",&n);
        printf("\n");

        if(n<7)
        {

             printf("\n");
             s--;
             printf("%s:\n",ptwo);
             srand(time(NULL));
              m= rand()%6+1;
              printf("%d\n",m);
             if(m!=n)
             {
            sum=sum+n;
            printf("%s score is %d\n",pone,sum);
             }
             else
             {
                 printf("\n%s,you're out\n",pone);
                 printf("\n");
                 printf("welldone! %s\n",ptwo);
                  printf("\n");
                 break;
             }
        }
        else if(n>7)
        {
            printf("invalid input\n");
            printf("\n");
            printf("your score is %d\n",sum);
            continue;
        }
    }
    printf("%s total score is %d\n",pone,sum);
    printf("%s need %d run to WIN!\n",ptwo,sum+1);
    printf("\n \n \nnow, %s will take batting and %s will take bowling\n",ptwo,pone);
    printf("BATSMAN : %s\t",ptwo);
    printf("\n");
    printf("BOWLER : %s\n",pone);
    printf("\n");



    for(i=0;i<b;i++)
    if(summ<=sum) {
    {
        printf("number of balls left:%d\n",x);
        printf("%s:\n",ptwo);
          srand(time(NULL));
          m= rand()%6+1;
          printf("%s score is hidden,only final result is displayed\n",ptwo);


        if(m<7)
        {

             printf("\n");
             x--;
             printf("%s:\n",pone);
             scanf("%d",&n);
             if(m!=n)
             {
            summ=summ+m;
            printf("%s score is %d\n\n",ptwo,summ);
            printf("%s need %d runs to win from %d balls\n\n",ptwo,sum-summ,x);
             }
             else
             {
                 printf("\n%s,you're out\n",ptwo);
                 printf("\n");
                 printf("welldone! %s\n",pone);
                  printf("\n");
                 break;
             }
        }
        else if(m>7)
        {
            printf("invalid input\n");
            printf("\n");
            printf("your score is %d\n",summ);
            continue;
        }
    }
    }
    else
    {
        break;
    }
    printf("%s total score is %d\n",ptwo,summ);

    if(sum>summ)
    {
        printf("\n \n \n WINNER WINNER CHICKEN DINNER\n \nHurray!!!!!!!!!!!!!!\n \n%s you've won the match!\n",pone);
    }
    else if(sum<summ)
    {
        printf("\n \n\nBETTER LUCK NEXT TIME \"%s\"\n",pone);
    }
    else
    {
        printf("\n \n \n match draw\nchill %s and %s...!!!\n",pone,ptwo);
    }
    return 0;
}
