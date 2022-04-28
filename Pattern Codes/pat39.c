#include<stdio.h>

int main()
{
    int n,i,j,alpha,p=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        alpha=65;
        for(j=i;j<=n;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            printf("%c",alpha++);
        }
        for(j=1;j<i;j++)
        {
            if((j+i)%2==0)
            printf(" ");
            else
            printf("%c",alpha++);
        }
       //alpha++;
        printf("\n");
    }


    alpha--;
    for(i=n-1;i>=1;i--)
    {
        alpha--;
        alpha=65+p;
        for(j=n;j>=i;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            printf("%c",alpha++);
        }
        for(j=1;j<=i;j++)
        {
            if((j+i)%2==0)
            printf(" ");
            else
            printf("%c",alpha++);
        }

        p++;
        printf("\n");
    }

    return 0;
}
