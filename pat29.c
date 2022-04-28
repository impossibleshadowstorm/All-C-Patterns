#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n-1;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(j==n)
            printf("*");
            else
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            if(j==i-1)
            printf("*");
            else
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            if(j==i-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    //MIDDLE PART
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        printf("*");
        printf("\n");
    }

    //LOWER PARTS

    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            if(j==i+1)
            printf("*");
            else
            printf(" ");
        }
        for(j=i;j<n-1;j++)
        {
            if(j==n-2)
            printf("*");
            else
            printf(" ");
        }
        for(j=i;j<n-1;j++)
        {
            if(j==n-2)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
