#include<stdio.h>

int main()
{
    int i,j,n,k=1,m;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        printf("%d",j);
        for(j=3;j<=k;j++)
        printf(" ");
        m=i;
        for(j=n;j>=i;j--)
        {
            if(i==1)
            {
                if(j!=n)
                printf("%d",m);
                m++;
            }
            else
            {
                printf("%d",m);
                m++;
            }
        }
        printf("\n");
        k+=2;
    }
    return 0;
}
