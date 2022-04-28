#include<stdio.h>

int main()
{
    int i,j,t,n,p=0;

    printf("\n ENTER N::");
    scanf("%d",&t);

    n=1;
    for(i=1;i<=t;i++)
    {
        if(i%2!=0)
        {
            n=p+i;
            for(j=1;j<=i;j++)
            {
                printf(" %02d",n);
                n++;
            }
        }
        else
        {
            p=n+i-1;
            for(j=1;j<=i;j++)
            {
                printf(" %02d",p);
                p--;
            }
        }
        printf("\n");
    }

    return 0;
}
