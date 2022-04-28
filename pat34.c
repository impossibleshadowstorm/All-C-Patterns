#include<stdio.h>

int main()
{
    int n,i,j,alpha=65;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            printf("%c",alpha);
        }
        for(j=1;j<i;j++)
        {
            if((j+i)%2==0)
            printf(" ");
            else
            printf("%c",alpha);
        }
        alpha++;
        printf("\n");
    }
}
