#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER THE N::");
    scanf("%d",&n);

    for(i=1;i<=2*n;i++)
    {
        if(i>=1 && i<=n)
        {
            for(j=1;j<=i;j++)
            printf("*");
        }
        else
        {
            for(j=2*n;j>i;j--)
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
