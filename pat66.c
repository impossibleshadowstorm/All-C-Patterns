#include<stdio.h>

int main()
{
    int i,j,n,p=1,t=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=p;j++)
        {
            if(t>9)
            t=1;
            printf(" %d",t);
            t++;
        }
        printf("\n");
        p=p*2;
    }

    return 0;
}
