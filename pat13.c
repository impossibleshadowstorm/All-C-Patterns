#include<stdio.h>

int main()
{
    int i,j,i2,t,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        printf(" ");
        i2=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",i2++);
            t=j;
        }
        //printf("\n%d\n",j);
        for(j=2;j<=i;j++)
        {
            t=t-1;
            printf("%d",t);
        }
        printf("\n");
    }

    return 0;
}
