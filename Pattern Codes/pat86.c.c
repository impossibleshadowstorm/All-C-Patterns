#include<stdio.h>

int main()
{
    int i,j,n,k=1;

    printf("\n ENTER N::");
    scanf("%d",&n);

    /*for upper Mountain. */
    for(i=1;i<=n/2+2;i++)
    {
        for(j=n;j>=i;j--)
        printf(" ");
        for(j=1;j<=k;j++)
        printf("@");
        printf("\n");
        k+=2;
    }

    /* For the next both side pyramid with gap in middle. */
    for(i=1;i<=n/2;i++)
    {
        for(j=i;j<=n/2;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        for(j=1;j<=n;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }

    /*for the next left structure. */
    for(i=1;i<=n/2+1;i++)
    {
        /* For the first middle line. */
        if(i==1)
        {
            for(j=1;j<=n/2+1;j++)
            printf("*");
            for(j=1;j<=n;j++)
            printf("@");
            for(j=1;j<=n/2+1;j++)
            printf("*");
        }
        /* For the last left lines structures. */
        else
        {
            for(j=2;j<=i;j++)
            printf(" ");
            for(j=i;j<=n/2+1;j++)
            printf("*");
            for(j=1;j<=n;j++)
            printf(" ");
            for(j=i;j<=n/2+1;j++)
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
