#include<stdio.h>

int main()
{
    int i,j,i2,t,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            t=j;
            printf("%d",j);
        }
        for(j=2;j<=i;j++)
        {
            t=t-1;
            printf("%d",t);
        }
        printf("\n");
    }

    return 0;
}
