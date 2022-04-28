#include<stdio.h>

int main()
{
    int i,j,n,k=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    //Outer loop for N number of rows
    for(i=1;i<=n-1;i++)
    {
        //Inner loop for half triangle space
        for(j=n-1;j>=i;j--)
        printf(" ");
        //Second loop for Whole triangle part
        for(j=1;j<=k;j++)
        {
            if(j==1 || j==k)    //for printing star at beginning and end of triangle
            printf("*");
            else
            printf(" ");
        }
        k+=2;
        printf("\n");
    }

    //Second outer loop for last 1 row full of stsr
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=k;j++)
        printf("*");
        printf("\n");
    }

    return 0;
}

