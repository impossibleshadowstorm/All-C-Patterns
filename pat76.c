#include<stdio.h>

int main()
{
    int i,j,n,p,m,k=1,space=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    p=(n-1)*3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=p;j++)
        printf(" ");
        m=i;
        for(j=1;j<=k;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            {
                printf("%d",m);
                m--;
            }
        }
        for(j=3;j<=space;j++)
        printf(" ");
        m=1;
        for(j=1;j<=k;j++)
        {
            if(i!=1)
            {
                if(j%2!=0)
                {
                    printf("%d",m);
                    m++;
                }
                else
                printf(" ");
            }
        }
        printf("\n");
        p-=3;
        k+=2;
        space+=2;
    }
    //k-=4;
    //printf("\n %d",k);

    p+=6;
    k-=4;
    space-=6;
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=p;j++)
        printf(" ");
        m=i;
        for(j=1;j<=k;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            {
                printf("%d",m);
                m--;
            }
        }
        for(j=1;j<=space;j++)
        printf(" ");
        m=1;
        for(j=1;j<=k;j++)
        {
            if(i!=1)
            {
                if(j%2==0)
                printf(" ");
                else
                {
                    printf("%d",m);
                    m++;
                }
            }
        }
        printf("\n");
        p+=3;
        k-=2;
        space-=2;
    }


    return 0;
}
