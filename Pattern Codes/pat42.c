#include<stdio.h>

int main()
{
    int i,j,n,m=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%2d ",m++);
        printf("\n");
    }

    return 0;
}
