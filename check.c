#include<stdio.h>
#include<string.h>

int main(void)
{
    int test, b = 7, a = 0, checka, checkb, liftCall;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d", &liftCall);
        checkb = b - liftCall;
        checka = liftCall - a;

        if(checka < 0)
            checka *= -1;
        if(checkb < 0)
            checkb *= -1;

        if(checkb < checka)
        {
            printf("B\n");
            b = liftCall;
        }
        if(checka < checkb)
        {
            printf("A\n");
            a = liftCall;
        }
        if(checka == checkb)
        {
            printf("A\n");
            a = liftCall;
        }
    }

	return 0;
}
