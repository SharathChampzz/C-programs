#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[20],m,n=0,i,p1,pone;
    int ptwo,p2,r,s=0;
    char play1[100],play2[100];
    printf("Enter player 1 name\n");
    gets(play1);
     printf("Enter player 2 name\n");
    gets(play2);



  for(i=0;i<20;i++)
  {
      a[i]=0;
      printf("%d ",a[i]);
  }
   printf("\n");


    printf("%s:enter your number\n",play1);
    scanf("%d",&pone);
    printf("\nyou need to press %d to throw dice\n\n",pone);

     printf("%s:enter your number\n",play2);
    scanf("%d",&ptwo);
    printf("\nyou need to press %d to throw dice\n\n",ptwo);

    while(a[19]==0)
    {
    printf("%s: press your number to throw dice\n",play1);
    scanf("%d",&p1);

     if(p1==pone)
     {
         a[n-1]=0;
          srand(time(NULL));
          m= rand()%6+1;
          printf("DICE : %d\n",m);

          n=m+n;
         if(n<=20)
        {
            a[n-1]= pone;
             for(i=0;i<20;i++)
            {

            printf("%d ",a[i]);
            }
            printf("\n");
     }
      else
        {
            printf("cant take this number\n");
            n=n-m;
        }

     }
     else{
        printf("Invalid key to throw a dice\n\n you lost the chance\n");
     }




    printf("%s: press your number to throw dice\n",play2);
    scanf("%d",&p2);

     if(p2==ptwo)
     {
         a[s-1]=0;
          srand(time(NULL));
          r= rand()%6+1;
          printf("DICE : %d\n",r);
          s=r+s;
         if(s<=20)
        {

            a[s-1]= ptwo;
             for(i=0;i<20;i++)
            {

            printf("%d ",a[i]);
            }
            printf("\n");
     }
      else
        {
            printf("cant take this number\n");
            s=s-r;
        }

     }
     else{
        printf("Invalid key to throw a dice\n\n you lost the chance\n");
     }

        }
        if(a[19]==pone)
        {
            printf("%s won the match\n",play1);
        }
        else
        {
            printf("%s won the match\n",play2);
        }
        printf("thank you\n");

    }

