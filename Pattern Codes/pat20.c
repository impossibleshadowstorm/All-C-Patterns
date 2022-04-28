#include<stdio.h>

int main()
{
    int i,j,n,t;
    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
            t=j;
        }
        for(j=2;j<=i;j++)
        {
            t=t-1;
            printf("%d",t);
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n;j++)
        printf("%d",j);
        for(j=n-1;j>=1;j--)
        printf("%d",j);
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
            t=j;
        }
        for(j=2;j<=i;j++)
        {
            t=t-1;
            printf("%d",t);
        }
        printf("\n");
    }

    return 0;
}
