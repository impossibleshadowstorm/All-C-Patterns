#include<stdio.h>

int main()
{
    int i,j,n,t=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        printf("%02d ",j);
        for(j=3;j<=t;j++)
        printf(" * ");
        if(i==1)
        {
            for(j=1;j<=n-1;j++)
            printf("%02d ",j+1);
        }
        else
        {
            for(j=i;j<=n;j++)
            printf("%02d ",j);
        }
        t=t+2;
        printf("\n");
    }

    return 0;
}
