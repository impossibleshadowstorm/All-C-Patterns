#include<stdio.h>

int main()
{
    int i,j,p=1,n,k;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n;k++)
        {
            if(k==1)
            {
                for(j=n-1;j>=i;j--)
                printf(" ");
                for(j=1;j<=p;j++)
                {
                    if(j==1 || j==p)
                    {
                        if(j==1)
                        printf("1");
                        else
                        printf("%d",i);
                    }
                    else
                    printf(" ");
                }
                for(j=n-1;j>i;j--)
                printf(" ");
            }
            else
            {
                for(j=n-1;j>=i;j--)
                printf(" ");
                for(j=1;j<=p;j++)
                {
                    if(j==1 || j==p)
                    {
                        if(i!=n)
                        {
                            if(j==1)
                            printf("1");
                            else
                            printf("%d",i);
                        }
                        else
                        {
                            if(j==p)
                            printf("%d",i);
                        }
                    }
                    else
                    printf(" ");
                }
                for(j=n-1;j>i;j--)
                printf(" ");
            }
        }
        printf("\n");
        p=p+2;
    }

    //p=p-4;
    //printf("\n %d",p);


    for(i=n;i>=1;i--)
    {
        for(j=n;j>=;j++)
        printf("*");
        printf("\n");
    }

    return 0;
}
