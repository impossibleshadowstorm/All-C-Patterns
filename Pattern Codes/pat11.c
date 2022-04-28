/********* C Program to print Mountain Numbers Pattern Problem (asked in MINDTREE). *******/

#include<stdio.h>

int main()
{
    int i,n,j,num;

    /* Take Input From User.  */
    printf("\n ENTER N::");
    scanf("%d",&n);

    /* Outer Loop for Number Of Rows. */
    for(i=1;i<=n;i++)
    {
        num=i;

        /* First Inner loop For Spaced opposite pyramid columns. */
        for(j=n-1;j>=i;j--)
        printf(" ");

        /* Second Inner Loop For Incremented Numbers Half triangle Columns. */
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
            num=num+1;
        }

        /* Decrementing The Number. */
        num=num-1;

        /* Third Inner Loop For Decremented Numbers triangle columns. */
        for(j=2;j<=i;j++)
        {
            num=num-1;
            printf("%d",num);
        }

        /* Prints Next Line. */
        printf("\n");
    }

    return 0;
}
