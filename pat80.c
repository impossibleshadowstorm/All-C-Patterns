#include<stdio.h>

int main()
{
    int i,j,n,k;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n/10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(i%2==0)
            {
                if(n>=1)
                printf("%d",n--);
            }
            else

        }
        printf("\n");
    }

    return 0;
}
