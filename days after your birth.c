#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>
void main()
{
    int db,mb,yb,dp,mp,yp,i,leap=0,norm=0,age,n,m,sum,minus,leapdays,normaldays,total,daysleft,y;
    printf("Enter the starting date\n");
    scanf("%d",&db);
    printf("Enter the starting month\n");
    scanf("%d",&mb);
    printf("Enter the starting year\n");
    scanf("%d",&yb);
    printf("Enter the present day date\n");
    scanf("%d",&dp);
    printf("Enter the present month\n");
    scanf("%d",&mp);
    printf("Enter the present year\n");
    scanf("%d",&yp);
    age=yp-yb;

     if(yb%4==0)
    {
        m=1;
    }
    else if(yb%400==0)
    {
        m=1;
    }
    else if(yb%100==0)
    {
        m=0;
    }
    else
    {
        m=0;
    }

    // checking whther next year is leap or not
     if((yp+1)%4==0)
    {
        n=1;
    }
    else if((yp+1)%400==0)
    {
        n=1;
    }
    else if((yp+1)%100==0)
    {
        n=0;
    }
    else
    {
        n=0;
    }
    //    printf("%d\n",n);
   // printf("%d\n",m);
    for(i=0;i<age;i++)
    {
    yb++;
     if(yb%4==0)
    {
        leap++;
    }
    else if(yb%400==0)
    {
         leap++;
    }
    else if(yb%100==0)
    {
        norm++;
    }
    else
    {
        norm++;
    }
    }
   // printf("you have seen %d times a leap year\n",leap+m);
  //  printf("you have seen %d times a non leap year\n",norm+m);


    if(mb==12)
    {
        sum=32-db;
    }
    else if(mb==11)
    {
        sum=62-db;
    }
    else if(mb==10)
    {
        sum=93-db;
    }
    else if(mb==9)
    {
        sum=123-db;
    }
    else if(mb==8)
    {
        sum=154-db;
    }
    else if(mb==7)
    {
        sum=185-db;
    }
    else if(mb==6)
    {
        sum=215-db;
    }
    else if(mb==5)
    {
        sum=246-db;
    }
    else if(mb==4)
    {
        sum=276-db;
    }
    else if(mb==3)
    {
       sum=307-db;
    }
    else if(mb==2)
    {
        if(m==1)
        {
            sum=336-db;
        }
        else
        {
            sum=335-db;
        }
    }
         else if(mb==1)
    {
        if(m==1)
        {
            sum=367-db;
        }
        else
        {
            sum=366-db;
        }
    }

    else
    {
        printf("\n\n\n\n\nyou entered invalid month\n\n\n\nplease correct that\n\n\nplease close the window and retype the month\n\nneglect next comments\n");

    }

 // printf("%d to be Added\n",sum);

// mb to mp and db to dp

    if(mp==12)
    {
       minus=32-dp;
    }
    else if(mp==11)
    {
       minus=62-dp;
    }
    else if(mp==10)
    {
        minus=93-dp;
    }
    else if(mp==9)
    {
        minus=123-dp;
    }
    else if(mp==8)
    {
       minus=154-dp;
    }
    else if(mp==7)
    {
      minus=185-dp;
    }
    else if(mp==6)
    {
        minus=215-dp;
    }
    else if(mp==5)
    {
        minus=246-dp;
    }
    else if(mp==4)
    {
        minus=276-dp;
    }
    else if(mp==3)
    {
       minus=307-dp;
    }
    else if(mp==2)
    {
        if(m==1)
        {
            minus=336-dp;
        }
        else
        {
           minus=335-dp;
        }
    }
         else if(mp==1)
    {
        if(m==1)
        {
            minus=367-dp;
        }
        else
        {
           minus=366-dp;
        }
    }

    else
    {
        printf("you entered invalid month\n\n\n\nplease correct that\n");

    }

  //  printf("%d to be subtracted\n",minus);


    leapdays=(366*leap);
    normaldays=(365*norm);
 //   printf("\nleap year days %d\n",leapdays);
  //  printf("\nnormal year days %d\n",normaldays);
    total=leapdays + normaldays + sum - minus;
    printf("\n\ntotal days is %d\n",total);
    y=total/365;
    printf("age : %d\n",y);


    if(minus>sum)
    {
        daysleft=minus-sum;
        printf("Days left for your birthday is %d\n",daysleft);
    }
    else
    {
        if(n=0)
        {
        daysleft=366-(sum-minus);
        if(daysleft==366)
        {
            printf("\n\nHey dude!!!!\n\n\nits your day today\n");
        }
        else
        {
            printf("Days left for your birthday is %d\n",daysleft);
        }


        }
        else
        {
        daysleft=365-(sum-minus);
        if(daysleft==365)
        {
            printf("\n\nHey dude!!!!\n\n\nits your birthday today\n");
                PlaySound(TEXT("Happy birthday to you ji _ _.wav"),NULL,SND_SYNC);

        }
        else
        {
            printf("Days left for your birthday is %d\n",daysleft);
        }

    }

}

}
