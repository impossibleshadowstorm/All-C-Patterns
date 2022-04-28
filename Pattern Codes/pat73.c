#include<stdio.h>

int main()
{
    int i,j,n,p;

    printf("\n ENTER N::");
    scanf("%d",&n);


    printf("*\n");
    for(i=1;i<=n;i++)
    {
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
    printf("*");

    return 0;
}

