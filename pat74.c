#include<stdio.h>

int main()
{
    int i,j,n,p=0,t=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        p=p+t;
        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                printf(" %02d",p);
            }
            else
            {
                printf(" %02d",j);
            }
        }
        printf("\n");
        t++;
    }

    return 0;
}
