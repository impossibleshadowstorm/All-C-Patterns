#include<stdio.h>

int main()
{
    int i,j,n,p;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
            printf("%d",j);
        }
        else
        {
            p=i;
            for(j=1;j<=i;j++)
            {
                printf("%d",p);
                p--;
            }
        }
        printf("\n");
    }

    return 0;
}
