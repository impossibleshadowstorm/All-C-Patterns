#include<stdio.h>

int main()
{
    int i,j,n,p=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    //UPPER PART
    p=2*n-3;
    for(i=1;i<=n-1;i++)
    {
        for(j=p;j>=1;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
        p=p-2;
    }



    //LOWER PART
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=p;j++)
        printf(" ");
        for(j=n;j>=i;j--)
        printf("*");
        printf("\n");
        p=p+2;
    }


    return 0;
}
