#include<stdio.h>

int main()
{
    int i,j,n,p;

    printf("\n ENTER N::");
    scanf("%d",&n);


    p=n-2;
    for(i=1;i<=n/2+1;i++)
    {
        for(j=1;j<=i;j++)           //UPPER LEFT MOST HOLLOW ONE
        {
            if(j==1 || j==i)
            printf("*");
            else
            printf("@");
        }
        for(j=p;j>=1;j--)           //MIDDLE TRIANGLE
        {
            if(i==1)
            printf("*");
            else
            printf(" ");
        }

        if(i<=n/2)                   //UPPER RIGHT MOST HOLLLOW FROM 1ST TO N/2 th LINE
        {
            for(j=1;j<=i;j++)
            {
                if(j==1 || j==i)
                printf("*");
                else
                printf("@");
            }
        }
        else                         //UPPER RIGHT MOST HOLLLOW FROM 1ST TO N/2 th LINE
        {
            for(j=1;j<=i-1;j++)
            {
                if(j==i-1)
                printf("*");
                else
                printf("@");
            }
        }

        printf("\n");
        p=p-2;
    }


    //LOWER
    p=1;
    for(i=n/2;i>=1;i--)
    {
        if(i!=1)
        {
            for(j=i;j>=1;j--)           //LOWER LEFT MOST HOLLOW ONE
            {
                if(j==i || j==1)
                printf("*");
                else
                printf("@");
            }
            for(j=1;j<=p;j++)           //MIDDLE TRIANGLE
            printf(" ");
            for(j=i;j>=1;j--)           //LOWER RIGHT MOST HOLLOW ONE
            {
                if(j==1 || j==i)
                printf("*");
                else
                printf("@");
            }
            printf("\n");
            p=p+2;
        }
        else
        {
            for(j=1;j<=n;j++)
            printf("*");
        }
    }

    return 0;
}
