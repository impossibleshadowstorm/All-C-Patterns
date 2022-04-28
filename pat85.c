#include<stdio.h>

int main()
{
    int i,j,n,k=1,up,down,move=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf(" ");
        for(j=1;j<=k;j++)
        {
            if(j==1 || j==k)
            printf("*");
            else
            {
                if(i!=n)
                printf(" ");
                else
                printf("*");
            }
        }
        for(j=i;j<n;j++)
        {
            if(i==1 || i==n)
            printf("*");
            else
            printf(" ");
        }
        for(j=1;j<=2*n;j++)
        {
            if(i==1 || i==n)
            printf("*");
            else
            printf(" ");
        }
        for(j=2;j<=i;j++)
        {
            if(i!=n)
            {
                if(j==i)
                printf("*");
                else
                printf(" ");
            }
            else
            printf("*");
        }
        printf("\n");
        k+=2;
    }

    k-=2;
    down=(k-n/2)/2;
    //printf("%d\n",k);
    up=(n-(n/2-1))/2;
    for(i=2;i<=n;i++)
    {
        printf(" ");
        for(j=1;j<=(k-n/2)/2;j++)
        {
            if(i==n || j==1)
            printf("*");
            else
            printf(" ");
        }
        for(j=1;j<=n/2;j++)
        {
            if(i>=1 && i<=n/4)
            printf(" ");
            else
            {
                if(i==(n/4)+1 || i==n || j==1 || j==n/2)
                printf("*");
                else
                printf(" ");
            }
        }
        for(j=1;j<=(k-n/2)/2;j++)
        {
            if(i==n || j==(k-n/2)/2)
            printf("*");
            else
            printf(" ");
        }

        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n)
            printf("*");
            else
            printf(" ");
        }
        for(j=1;j<=n-1;j++)
        {
            if(i==1 && i<=up)
            printf(" ");
            else if(i>up && i<=up+n/2-1)
            {
                if(i>=up+1 && i<=up+((n/2-1)/2) || i==up+n/2-1 || j==1 || j==n-1)
                printf("^");
                else
                printf("_");
            }
            else
            {
                if(i==n)
                printf("*");
                else
                printf(" ");
            }
        }
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==n)
            printf("*");
            else
            printf(" ");
        }

        printf("\n");
    }


    for(i=1;i<=n/2;i++)
    {
        printf(" ");
        for(j=1;j<=(k-n/2)/2;j++)
        printf(" ");
        for(j=1;j<=move;j++)
        printf(" ");
        for(j=1;j<=n/2;j++)
        printf("^");
        for(j=1;j<=i;j++)
        {
            if(j>=n/4+1)
            printf("^");
        }
        printf("\n");
        move+=2;
    }

    move=(n+n/2);
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=move;j++)
        printf(" ");
        for(j=1;j<=n/2;j++)
        printf("^");
        for(j=n/4+1;j>=i;j--)
        {
            printf("^");
        }
        printf("\n");
        move-=2;
    }

    return 0;
}
