#include<stdio.h>

int main()
{
    int i,j,len,bre;

    printf("\n ENTER LENGTH::");
    scanf("%d",&len);

    printf("\n ENTER BREADTH::");
    scanf("%d",&bre);

    for(i=1;i<=bre;i++)
    {
        if(i==1 || i==bre)
        {
            for(j=1;j<=len;j++)
            printf(" *");
        }
        else
        {
            for(j=1;j<=1;j++)
            printf(" *");
            for(j=1;j<=len-2;j++)
            printf("  ");
            for(j=1;j<=1;j++)
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}

