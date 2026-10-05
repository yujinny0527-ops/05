#include <stdio.h>

int main(void)
{
    char c;
    int num = 0;

    printf("Enter a string: ");

    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
        {
            num++;
        }
    }

    printf("Number of digits: %d\n", num);

    return 0;
}