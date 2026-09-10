#include <stdio.h>
int main()
{
    char op;
    int a, b, result;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter operator (+, -, *, /, %): ");
    scanf(" %c", &b);

    printf("enter second number: ");
    scanf("%d", &b);

    switch (op)
    {
        case '+':
            result = a + b;
            printf("result = %d", result);
            break;

        case '-':
            result = a - b;
            printf("result = %d", result);
            break;

        case '*':
            result = a * b;
            printf("result = %d", result);
            break;

        case '/':
            if(b != 0)
                printf("result = a / b");
            else
                printf("division by zero is not possible");
            break;

        case '%':
            if(b != 0)
                result = a % b;
            else
            {
            printf("modulo by zero is not possible");
            break;
            }
            printf("result = %d", result);
            break;

        default:
            printf("invalid operator.");
        }
    return 0;
}