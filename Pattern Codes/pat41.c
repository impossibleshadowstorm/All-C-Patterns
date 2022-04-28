#include<stdio.h>

int main()
{
    int n,i,j,p,m;

    printf("\n ENTER N::");
    scanf("%d",&n);

    p=2*n-2;
    for(i=1;i<=n;i++)
    {
        m=i;
        for(j=1;j<=i;j++)
        printf("%d",j);
        for(j=1;j<=p;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%d",m--);
        }
        p=p-2;
        printf("\n");
    }

    return 0;
}
