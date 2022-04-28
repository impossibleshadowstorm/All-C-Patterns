#include<stdio.h>

int main()
{
    int i,j,n,p=0,t,m,k;

    printf("\n ENTER N::");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        t=n;
        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                p=i;
                printf(" %02d",p);
            }
            else
            {
                p=p+t;
                printf(" %02d",p);
            }
            t--;
        }
        printf("\n");
    }

    return 0;
}
