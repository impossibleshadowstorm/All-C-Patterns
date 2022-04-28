#include<stdio.h>

int main()
{
    int i,j,n,p;

    printf("\n ENTER N::");
    scanf("%d",&n);


    //UPPER PART
    p=2*n-3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        printf(" ");
        for(j=1;j<=1;j++)
        printf("%d",i);
        for(j=p;j>=1;j--)
        printf(" ");
        for(j=1;j<=1;j++)
        {
            if(i!=n)
            printf("%d",i);
        }
        printf("\n");
        p=p-2;
    }


    //LOWER PART
    p=1;
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        printf(" ");
        for(j=1;j<=1;j++)
        printf("%d",i);
        for(j=1;j<=p;j++)
        printf(" ");
        for(j=1;j<=1;j++)
        printf("%d",i);
        printf("\n");
        p=p+2;
    }

    return 0;
}
