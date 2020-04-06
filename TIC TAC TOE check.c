#include<stdio.h>
#include<conio.h>
#include<string.h>
int equal(int a[]);
int a[9]={0,0,0,0,0,0,0,0,0};

int m,n,x,y,i,p,k,j,q;
void main()
{   char pone[100],ptwo[100];
printf("WELCOME TO TIC TAC TOE:\n");
    printf("player 1: Enter your name\n");
    gets(pone);
    printf("player 2: Enter your name\n");
    gets(ptwo);

    printf("%d[1]  %d[2]  %d[3]\n\n%d[4]  %d[5]  %d[6]\n\n%d[7]  %d[8]  %d[9]\n\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
    printf("%s: Choose the number except 0\n",pone);
    scanf("%d",&m);
    printf("%s : Choose the number except 0 and the number chosen by player 1:\n",ptwo);
    scanf("%d",&n);

    printf("%s: is represented as %d\n\n",pone,m);
    printf("%s: is represented as %d\n\n",ptwo,n);

  for(i=0;i<3;i++)
    {
        printf("%s:Enter the location to where you want to locate %d.\n",pone,m);
        scanf("%d",&x);
        a[x-1]=m;
        printf("%d  %d  %d\n\n%d  %d  %d\n\n%d  %d  %d\n\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);

        j=equal(a);
        if(j!=0)
        {
        printf("%d won the match\n",j);
        i=200;
        if(j==m)
        {
            printf("%s won the match\n\nNeglect the next lines and close the window\n\n thank you",pone);

        }
        else
        {
            printf("%s won the match\n\nNeglect the next lines and close the window\n\n thank you",ptwo);
        }

        }

        else
        {
        printf("still game is left\n");
        }

         printf("%s:Enter the location to where you want to locate %d.\n",ptwo,n);
        scanf("%d",&y);
        a[y-1]=n;
        printf("%d  %d  %d\n\n%d  %d  %d\n\n%d  %d  %d\n\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
        j=equal(a);
        if(j!=0)
        {
        printf("%d won the match\n",j);
        i=200;

         if(j==m)
        {
            printf("%s won the match\n\nNeglect the next lines and close the window\n\n thank you\n",pone);
            break;
        }
        else
        {
            printf("%s won the match\n\nNeglect the next lines and close the window\n\n thank you\n",ptwo);
            break;
        }


        }

        else
        {
        printf("still game is left\n");
        }


    }
     printf("Total board looks like this\n");
     printf("%d  %d  %d\n\n%d  %d  %d\n\n%d  %d  %d\n\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
    for(i=0;i<1;i++)
    {
      j=equal(a);
        if(j!=0)
        {
        printf("%d won the match\n",j);
        i=200;
         if(j==m)
        {
            printf("%s won the match\n\nNeglect the next lines and close the window\n\n thank you\n",pone);
            break;
        }
        else
        {
            printf("%s won the match\n\nNeglect the next lines and close the window\n\n thank you\n",ptwo);
            break;
        }



        }

        else
        {
        printf("still game is left\n");
        }
        break;
    }

     for(i=0;i<100;i++)
     {
         printf("%s: Enter from where to where you are shifting your number %d\n",pone,m);
          scanf("%d",&p);
          scanf("%d",&q);
        a[p-1]=0;
        a[q-1]=m;
        printf("%d  %d  %d\n\n%d  %d  %d\n\n%d  %d  %d\n\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);

        j=equal(a);
        if(j!=0)
        {
        printf("%d won the match\n",j);
        i=200;
         if(j==m)
        {
            printf("%s won the match\n",pone);
        }
        else
        {
            printf("%s won the match\n",ptwo);
        }

        continue;

        }

        else
        {
        printf("still game is left\n");
        }

        printf("%s: Enter from where to where you are shifting your number %d\n",ptwo,n);
          scanf("%d",&p);
          scanf("%d",&q);
        a[p-1]=0;
        a[q-1]=n;
        printf("%d  %d  %d\n\n%d  %d  %d\n\n%d  %d  %d\n\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);

        j=equal(a);
        if(j!=0)
        {
        printf("%d won the match\n",j);
        i=200;
         if(j==m)
        {
            printf("%s won the match\n",pone);
        }
        else
        {
            printf("%s won the match\n",ptwo);
        }

        continue;

        }

        else
        {
        printf("still game is left\n");
        }
     }
     printf("thank you\n");
}

int equal(int a[])
{
    if((a[0]==a[1] && a[0]==a[2]) || (a[0]==a[3] && a[0]==a[6]) || (a[0]==a[4] && a[0]==a[8]) )
    {
        return a[0];
    }
    else if((a[0]==a[1] && a[1]==a[2]) || (a[1]==a[4] && a[1]==a[7]))
    {
        return a[1];
    }
    else if((a[2]==a[5] && a[8]==a[2]) || (a[0]==a[2] && a[2]==a[1]) || (a[2]==a[4] && a[2]==a[6]) )
        {
        return a[2];
    }
     else if((a[0]==a[3] && a[3]==a[6]) || (a[3]==a[4] && a[3]==a[5]))
    {
        return a[3];
    }
     else if((a[0]==a[4] && a[8]==a[4]) || (a[4]==a[7] && a[4]==a[1]) || (a[2]==a[4] && a[4]==a[6]) || (a[5]==a[4] && a[4]==a[3]))
        {
        return a[4];
    }

      else if((a[5]==a[2] && a[5]==a[8]) || (a[5]==a[4] && a[3]==a[5]))
    {
        return a[5];
    }

     else if((a[6]==a[0] && a[6]==a[3]) || (a[6]==a[2] && a[6]==a[4]) || (a[6]==a[7] && a[8]==a[6]) )
        {
        return a[6];
    }

     else if((a[7]==a[6] && a[7]==a[8]) || (a[7]==a[4] && a[1]==a[7]))
    {
        return a[7];
    }

     else if((a[6]==a[8] && a[8]==a[7]) || (a[8]==a[2] && a[8]==a[5]) || (a[8]==a[0] && a[8]==a[4]) )
        {
        return a[8];
    }
    else
    {
        return 0;
    }

}

