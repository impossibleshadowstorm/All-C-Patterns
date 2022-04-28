#include<stdio.h>

int main()
{
    int i,j,n,p;

    printf("\n ENTER N::");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    printf(" ");
    printf("*\n");
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        printf(" ");
        printf("*");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        p=j-2;
        for(j=1;j<i;j++)
        {
            printf("%d",p);
            p--;
        }
        printf("*");
        printf("\n");
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=i;j<=n-1;j++)
        printf(" ");
        printf("*");
        for(j=1;j<=i;j++)
        printf("%d",j);
        p=j-2;
        for(j=1;j<i;j++)
        {
            printf("%d",p);
            p--;
        }
        printf("*");
        printf("\n");
    }
    for(j=1;j<=n;j++)
    printf(" ");
    printf("*");

    return 0;
}
