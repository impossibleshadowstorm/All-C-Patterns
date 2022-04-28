#include<stdio.h>

int main()
{
    int i,j,n,t;

    printf("\n ENTER N::");
    scanf("%d",&n);


    //TOP PART
    for(i=1;i<=n+1;i++)
    {
        //for(j=i;j<=n;j++)
        //printf(" ");
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
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=2*n+3;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
