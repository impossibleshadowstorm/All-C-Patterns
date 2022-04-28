#include<stdio.h>

int main()
{
    int i,n,j;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        if(i==n)
        {
            for(j=1;j<=n;j++)
            printf("%d",j);
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                if(j==1 || j==i)
                {
                    printf("%d",j);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}

