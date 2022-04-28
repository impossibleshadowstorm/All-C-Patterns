#include<stdio.h>

int main()
{
    int i,j,n,p,m,k;

    printf("\n ENTER N::");
    scanf("%d",&n);

    p=2*n-1;
    m=2;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n;k++)
        {
            if(k==1)
            {
                for(j=2;j<=i;j++)
                printf(" ");
                for(j=p;j>=1;j--)
                {
                    if(i==1)
                    {
                        printf("*");
                    }
                    else
                    {
                        if(j==p || j==1)
                        printf("*");
                        else
                        printf(" ");
                    }
                }
            }
            else
            {
                for(j=3;j<=m;j++)
                printf(" ");
                for(j=p;j>=1;j--)
                {
                    if(i==1)
                    {
                        printf("*");
                    }
                    else
                    {
                        if(j==p || j==1)
                        printf("*");
                        else
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
        p=p-2;
        m=m+2;
    }

    //LOWER PART
    p=3;
    m=2*n-4;
    for(i=1;i<=n-1;i++)
    {
        for(k=1;k<=n;k++)
        {
            if(k==1)
            {
                for(j=i;j<=n-2;j++)
                printf(" ");
                for(j=1;j<=p;j++)
                {
                    if(i==n-1)
                    {
                        printf("*");
                    }
                    else
                    {
                        if(j==1 || j==p)
                        printf("*");
                        else
                        printf(" ");
                    }
                }
            }
            else
            {
                for(j=m;j>=1;j--)
                printf(" ");
                for(j=1;j<=p;j++)
                {
                    if(i==n-1)
                    {
                        printf("*");
                    }
                    else
                    {
                        if(j==1 || j==p)
                        printf("*");
                        else
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
        p=p+2;
        m=m-2;
    }

    return 0;
}
