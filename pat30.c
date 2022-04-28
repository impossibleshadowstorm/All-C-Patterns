#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        //for(j=i;j<=n;j++)
        //printf("#");
        for(j=1;j<=i;j++)
        printf("*");
        if(i==n)
        {
            for(j=2;j<i;j++)
            printf("*");
        }
        else
        {
            for(j=2;j<=i;j++)
            printf("*");
        }
        for(j=i;j<=n-1;j++)
        printf(" ");
        for(j=i;j<=n-2;j++)
        printf(" ");
        for(j=i;j<=n-1;j++)
        {
            if(i!=n-1)
            printf(" ");
        }
        for(j=i;j<=n-3;j++)
        {
            if(i!=n-1)
            printf(" ");
        }
        for(j=1;j<=i;j++)
        printf("*");
        if(i>1 && i<n)
        {
            for(j=2;j<=i;j++)
            printf("*");
        }
        else if(i==n)
        {
            for(j=1;j<=n-3;j++)
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
