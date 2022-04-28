#include<stdio.h>

int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    //First inner loop for n number of rows
    for(i=1;i<=n;i++)
    {
        //inner loop for triangle space
        for(j=n-1;j>=i;j--)
        printf(" ");
        //second inner loop for first side arrow
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            printf("*");
            else
            printf(" ");
        }
        //third inner loop for left arrow part
        for(j=2;j<=i;j++)
        {
            if(j==i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    //Outer loop for left n-1 rows
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
