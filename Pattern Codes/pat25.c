#include<stdio.h>

int main()
{
    int i,j,n,tri;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(tri=n;tri>i;tri--)
        printf("%d ",tri);
        for(j=i;j>=1;j--)
        printf("%d ",tri);
        for(j=i;j>1;j--)
        printf("%d ",i);
        for(tri=i+1;tri<=n;tri++)
        printf("%d ",tri);
        printf("\n");
    }


    for(i=2;i<=n;i++)
    {
        for(tri=n;tri>i;tri--)
        printf("%d ",tri);
        for(j=1;j<=i;j++)
        printf("%d ",tri);
        for(j=i;j>1;j--)
        printf("%d ",i);
        for(tri=i+1;tri<=n;tri++)
        printf("%d ",tri);
        printf("\n");
    }

    return 0;
}
