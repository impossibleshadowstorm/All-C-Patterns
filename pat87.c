#include<stdio.h>

int main()
{
    int i,j,n,next;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        printf("%d",j);
        next=j-2;
        for(j=i+1;j<=n;j++)
        printf("%d",next--);
        printf("\n");
    }

    for(i=2;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf("%d",j);
        next=j-2;
        for(j=i+1;j<=n;j++)
        printf("%d",next--);
        printf("\n");
    }

    return 0;
}
