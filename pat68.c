#include<stdio.h>

int main()
{
    int i,j,n,p=2;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j)
            {
                printf(" %02d",p-1);
            }
            else
            {
                printf(" %02d",i+j);
                p=i+j;
            }
        }
        p=p-2;
        for(j=3;j<=i;j++)
        {
            printf(" %02d",p);
            p--;
        }
        printf("\n");
    }

    return 0;
}
