#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
            printf("*");
        }
        else
        {
            for(j=1;j<=1;j++)
            printf("*");
            for(j=1;j<=n-2;j++)
            printf(" ");
            for(j=1;j<=1;j++)
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
