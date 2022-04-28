#include<stdio.h>
int main()
{
    int i,j,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n-1;i++)
    {
        for(j=n;j>=i;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            if(j==1)
            printf("%d",j);
            else
            printf(" ");
        }
        for(j=2;j<=i;j++)
        {
            if(j==i)
            printf("%d",i);
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=n;j++)
        printf(" %d",j);
    }
    return 0;
}
