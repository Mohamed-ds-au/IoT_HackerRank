#include <stdio.h>


/*

Write a program that takes a number from the user and print if it's even or odd

*/
int main()
{
    while (1)
    {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            printf("The number is even\n");
        }
        else
        {
            printf("The number is odd\n");
        }
    }
}



