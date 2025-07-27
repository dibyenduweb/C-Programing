#include <stdio.h>

int main()
{
    int FirstNumber, SecondNumber;
    printf("Enter First Number: \n");
    scanf("%d", &FirstNumber);
    printf("Enter Second Number: \n");
    scanf("%d", &SecondNumber);

    if (FirstNumber == SecondNumber)
    {
        printf("Two numbers are equal.\n");
    }
    if (FirstNumber > SecondNumber)
    {
        printf("%d numbers is grater then %d.\n", FirstNumber, SecondNumber);
    }
    return 0;
};