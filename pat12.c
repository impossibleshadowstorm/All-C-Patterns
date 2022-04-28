#include<stdio.h>

int main()
{
    int i,n,j,num;

    printf("\n ENTER N::");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        num=i;
        for(j=1;j<=i;j++)
        {

            printf("%d",num);
            num=num+1;
        }
        printf("\n");
    }

    return 0;
}
