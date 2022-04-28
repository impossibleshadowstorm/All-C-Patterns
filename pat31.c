#include<stdio.h>
int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf("0 ");
            else
            printf("1 ");
        }
        for(j=i;j<=n-1;j++)
        printf("  ");
        for(j=i;j<=n-2;j++)
        printf("  ");

        if(i==n)
        {
            for(j=1;j<=n-1;j++)
            {
                if(j%2==0)
                printf("1 ");
                else
                printf("0 ");
            }
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                if(j%2==0)
                printf("0 ");
                else
                printf("1 ");
            }
        }
        printf("\n");
    }

    //LOWER
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf("0 ");
            else
            printf("1 ");
        }
        for(j=n-1;j>=i;j--)
        printf("  ");
        for(j=n-1;j>i;j--)
        printf("  ");
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf("0 ");
            else
            printf("1 ");
        }
        printf("\n");
    }

    return 0;
}
