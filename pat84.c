#include<stdio.h>

int main()
{
    int i,j,n,k=1,count=0,counti=0;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf(" ");
        for(j=1;j<=k;j++)
        {
            if(i%2!=0)
            {
                if(j==1)
                count=counti;
                if(j%2!=0)
                {
                    count++;
                    printf("%d",count);
                }
                else
                printf("*");
            }
            else
            {
                if(j==1)
                {
                    count=count+i;
                    counti=count;
                }
                if(j%2!=0)
                {
                    printf("%d",count);
                    count--;
                }
                else
                printf("*");
            }
        }
        printf("\n");
        k+=2;
    }

    return 0;
}
