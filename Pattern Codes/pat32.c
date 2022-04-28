#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\nENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            for(j=1;j<=1;j++)
            printf("* ");
            for(j=1;j<=n-1;j++)
            printf("  ");
        }
        else
        {
            for(j=n-2;j>=i-1;j--)
            printf("  ");
            for(j=1;j<=i;j++)
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
