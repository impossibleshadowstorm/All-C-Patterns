#include<stdio.h>

int main()
{
    int i,j,n,p=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=p;j++)
        printf(" %02d",j);
        printf("\n");
        p+=2;
    }

    p-=2;
    for(i=n-1;i>=1;i--)
    {
        p-=2;
        for(j=1;j<=p;j++)
        printf(" %02d",j);
        printf("\n");
    }

    return 0;
}
