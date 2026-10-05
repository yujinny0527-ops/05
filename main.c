#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;
    int result;

    printf("Enter calculation: ");
    scanf("%d %c %d", &num1, &op, &num2);

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}