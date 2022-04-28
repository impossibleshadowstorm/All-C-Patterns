#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=n;i<=2*n;i++)
    {
        for(j=n;j<=i;j++)
        printf("%d",i);
        printf("\n");
    }
    for(i=2*n-1;i>=n;i--)
    {
        for(j=n;j<=i;j++)
        printf("%d",i);
        printf("\n");
    }

    return 0;
}
