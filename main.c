#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("It is positive.\n");
    }
    else if (num < 0)
    {
        printf("It is negative.\n");
    }
    else
    {
        printf("It is zero.\n");
    }

    return 0;
}