#include<stdio.h>

int main()
{
    int i,j,n,p;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        p=j+2;
        for(j=n-1;j>=i;j--)
        {
            printf("%d",p);
            p++;
        }
        printf("\n");
    }

    return 0;
}
