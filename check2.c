#include<stdio.h>
#include<string.h>

int main()
{
	char parent[1001];
	char ch;

    scanf("%s", &parent);
    printf("\nY/N:: ");
    fflush(stdin);
    scanf("%c", &ch);

    if(ch == 'N')
    {
        printf("\nTOTAL MEMBERS:%d",1);
        printf("\nCOMISSION DETAILS");
        fflush(stdout);
        printf("%s: %d INR", parent, 500);
        fflush(stdout);
    }
    else if(ch == 'Y')
    {
        char child[10001];

        fflush(stdin);
        scanf("%s", &child);
        fflush(stdin);

        int len = strlen(child), count_child = 2;

        for(int i = 0 ; i < len ; i++)
        {
            if(child[i+1] == ',')
                count_child++;
        }

        int par_com = (5000 * (10 * count_child)) / 100;

        fflush(stdout);
        printf("\nTOTAL MEMBERS:%d",count_child);
        fflush(stdout);
        printf("\n COMISSION DETAILS");

        for(int i = 0 ; i < len ; i++)
        {
            if(child[i] != ',')
            {
                fflush(stdout);
                printf("%c", child[i]);
            }
            if(child[i] == ',')
            {
                fflush(stdout);
                printf(":%d INR",250);
            }
            printf("\n");
        }
    }

    return 0;
}
