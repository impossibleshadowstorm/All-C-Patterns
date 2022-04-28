#include<stdio.h>
int main()
{
    int i,j,n,p=1,l=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=p;j++)
        {
            if(j%2==0)
            printf("*");
            else
            printf("%d",l++);
        }
        p=p+2;
        printf("\n");
    }
    l=l-n;
    for(i=n;i>=1;i--)
    {
        p=p-2;
        for(j=1;j<=p;j++)
        {
            if(j%2==0)
            printf("*");
            else
            printf("%d",l++);
        }
        l=l-p;
        printf("\n");
    }

    return 0;
}
