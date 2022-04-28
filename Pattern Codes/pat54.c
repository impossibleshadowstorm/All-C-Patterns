#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i!=n)
        {
            for(j=1;j<=n;j++)
            {
                if(j!=n)
                printf(" ");
                else
                printf("+");
            }
        }
        else
        {
            for(j=1;j<=2*n;j++)
            printf("+");
        }
        printf("\n");
    }

    //LOWER PART
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j!=n)
            printf(" ");
            else
            printf("+");
        }
        printf("\n");
    }

    return 0;
}
