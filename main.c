#include <stdio.h>

int main(void)
{
    int answer = 59;
    int num;
    int count = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        count++;

        if (num > answer)
        {
            printf("Too high.\n");
        }
        else if (num < answer)
        {
            printf("Too low.\n");
        }
        else
        {
            printf("Correct!\n");
            printf("Attempts: %d\n", count);
        }

    } while (num != answer);

    return 0;
}