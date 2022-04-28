#include<stdio.h>

int main()
{
    int i,j,n;

    /* Take Input from User of the Number Of Rows. */
    printf("\n ENTER THE NUMBER OF ROWS::");
    scanf("%d",&n);

    /* Outer Loop for the number of Row. */
    for(i=1;i<=n;i++)
    {
        /* Inner Loop for the number columns. */
        for(j=1;j<=n;j++)
        {
            //Prints the counting number. */
            printf(" %d",i);
        }
        // Printing new line. */
        printf("\n");
    }

    return 0;
}
