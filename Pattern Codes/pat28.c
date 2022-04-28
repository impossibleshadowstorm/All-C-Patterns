#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            if(j==1)
            printf("*");
            else
            printf(" ");
        }
        for(j=2;j<=i;j++)
        {
            if(j==i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    //LOWER
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==i)
            printf("*");
            else
            printf(" ");
        }
        for(j=i;j<n;j++)
        printf(" ");
        for(j=i+1;j<=n;j++)
        {
            if(j==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
