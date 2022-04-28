#include<stdio.h>
int main()
{
    int i,j,n,p;

    printf("\n ENTER N::");
    scanf("%d",&n);


    p=1;
    for(i=1;i<=n;i++)
    {
        for(j=2*n-2;j>=i;j--)
        printf("*");
        for(j=1;j<=p;j++)
        {
            if(j%2==0)
            {
                printf("*");
            }
            else
            {
                printf("%d",i);
            }
        }
        for(j=2*n-2;j>=i;j--)
        printf("*");
        printf("\n");
        p=p+2;
    }

    return 0;
}
