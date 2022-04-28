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
            for(j=n;j>=i;j--)
            printf("*");
        }
        else
        {
            for(j=n;j>=i;j--)
            {
                if(j==n || j==i)
                {
                    printf("*");
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

