#include<stdio.h>

int main()
{
    int i,j,n,m=1,p=0;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            m=m+p;
            printf("%d ",m);
            p++;
        }
        printf("\n");
    }

    return 0;
}
