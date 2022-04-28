#include<stdio.h>

int main()
{
    int i,j,n,p;

    printf("\n ENTER N::");
    scanf("%d",&n);

    //UPPER PART
    p=1;
    for(i=1;i<=n/2+1;i++)
    {
        for(j=1;j<=p;j++)
        printf(" ");
        for(j=1;j<=1;j++)
        printf("*");
        printf("\n");
        p=p+2;
    }

    //MIDDLE PART
    for(i=1;i<=n+2;i++)
    printf("*");
    printf("\n");

    //LOWER PART
    p=n;
    for(i=1;i<=n/2+1;i++)
    {
        for(j=p;j>=1;j--)
        printf(" ");
        for(j=1;j<=1;j++)
        printf("*");
        printf("\n");
        p=p-2;
    }

    return 0;
}
