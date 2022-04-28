 #include<stdio.h>

 int main()
 {
     int i,j,n;

     printf("\n ENTER N::");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
        for(j=n;j>i;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            printf("*");
        }
        for(j=2;j<=i;j++)
        {
            if((i+j)%2==0)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
     }


     for(i=1;i<=n;i++)
     {
        for(j=1;j<i;j++)
        printf(" ");
        for(j=n;j>=i;j--)
        {
            if(j%2==0)
            printf(" ");
            else
            printf("*");
        }
        for(j=n;j>i;j--)
        {
            if((i+j)%2==0)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
     }

     return 0;
 }
