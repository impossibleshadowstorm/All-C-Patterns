#include<stdio.h>

int main()
{
    int i,j,n,k;

    printf("\n ENTER THE NUMBER TILL YOU WANT TO PRINT (MINIMUM 10)::");
    scanf("%d",&n);

    k=n/10;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(n>=1)
            printf(" %d",n);
            n--;
        }
        printf("\n");
    }

    return 0;
}
