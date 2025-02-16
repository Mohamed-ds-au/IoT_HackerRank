
/*
Make a calculator that take two variables from the user and the operator
then perform the arithmatic operation

*/

#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;
    while (1)
    {
        printf("First number: ");
        scanf("%d", &num1);

        printf("Second number: ");
        scanf("%d", &num2);

        printf("Operator: ");
        scanf(" %c", &operator);

        switch (operator)
        {
            case '+':
            printf("Sum: %d\n", (num1 + num2));
            break;

            case '-':
            printf("Sub: %d\n", (num1 - num2));
            break;

            case '*':
            printf("Multiply: %d\n", (num1 * num2));
            break;

            case '/':
            printf("Division: %d\n", (num1 / num2));
            break;
        }
    }
}


