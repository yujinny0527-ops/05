#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("Sum: %d\n", sum);

    return 0;
}