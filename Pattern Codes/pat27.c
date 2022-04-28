#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            if(j==i)
            printf("*");
            else
            printf(" ");
        }
        for(j=1;j<=n-1;j++)
        {
            if(i==1 || i==n)
            {
                printf("*");
            }
            else
            {
                if(j==n-1)
                printf("*");
                else
                printf(" ");
            }
        }
        printf("\n\n");
    }

   /* for(i=1;i<=1;i++)
    {
        for(j=1;j<=n;j++)
        printf("*");
        printf("\n");
    }*/

    return 0;
}
