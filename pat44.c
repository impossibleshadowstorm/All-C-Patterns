#include<stdio.h>

int main()
{
    int i,j,n,t;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n+1;i++)
    {
        for(j=i;j<=n;j++)
        printf(" ");
        for(j=1;j<=1;j++)
        printf("*");
        for(j=1;j<=i-1;j++)
        {
            t=j;
            if(i!=1)
            printf("%d",t);
        }
        for(j=3;j<=i;j++)
        {
            t=t-1;
            printf("%d",t);
        }
        for(j=1;j<=1;j++)
        {
            if(i!=1)
            printf("*");
        }
        printf("\n");
    }


    //BOTTOM PART
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
        for(j=1;j<=1;j++)
        printf("*");
        t=0;
        for(j=i;j<=n-1;j++)
        {
            t=t+1;
            printf("%d",t);
        }
        for(j=2;j<=n-i;j++)
        {
            t=t-1;
            printf("%d",t);
        }
        for(j=1;j<=1;j++)
        {
            if(i!=n)
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
