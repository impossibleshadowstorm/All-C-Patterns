#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        printf(" ");
        for(j=n;j>=i;j--)
        printf("*");
        printf("\n");
    }

    //LOWER PART
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
        for(j=1;j<=i+1;j++)
        printf("*");
        printf("\n");
    }

    return 0;
}
