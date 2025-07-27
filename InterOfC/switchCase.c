#include <stdio.h>

int main()
{
    char operation;

    int FirstNumber, SecondNumber;

    printf("Enter the operator oither + or - or * or /: \n");
    scanf(" %c", &operation);

    printf("Enter the first number: \n");
    scanf("%d", &FirstNumber);

    printf("Enter the second number: \n");
    scanf("%d", &SecondNumber);

    switch(operation)
    {
        case '+':
        printf("Sum of two numbers: %d" , FirstNumber + SecondNumber);
        break;
        case '-':
        printf("Difference of two numbers: %d" , FirstNumber - SecondNumber);
        break;
        case '*':
        printf("Product of two numbers: %d" , FirstNumber * SecondNumber);
        break;
        case '/':
        printf("Division of two numbers: %d" , FirstNumber / SecondNumber);
        break;
        default:
        printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
};
