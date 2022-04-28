#include<stdio.h>

int main()
{
    int i,j,n,p=1;

    printf("\n ENTER N:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf(" ");
        for(j=1;j<=p;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            printf("%d",i);
        }
        p=p+2;
        printf("\n");
    }

    p=p-2;
    for(i=n-1;i>=1;i--)
    {
        p=p-2;
        for(j=n;j>=i;j--)
        printf(" ");
        for(j=1;j<=p;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            printf("%d",i);
        }

        printf("\n");
    }

    return 0;
}
