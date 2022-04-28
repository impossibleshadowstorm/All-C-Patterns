#include<stdio.h>

int main()
{
    int i,j,i2,t,n;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        i2=65;
        for(j=1;j<=i;j++)
        {
            t=i2;
            printf("%c",i2);
            i2=i2+1;
        }
        //printf("\n%d\n",j);
        for(j=2;j<=i;j++)
        {
            t=t-1;
            printf("%c",t);
        }
        printf("\n");
    }

    return 0;
}
