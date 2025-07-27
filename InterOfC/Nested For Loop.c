//nested for loop in C
// #include <stdio.h>

// int main()
// {

//     int NumOfRows, r,c;

//     printf("Enter the number of rows: ");
//     scanf("%d", &NumOfRows);

//     // Using a nested for loop to print a pattern
//     for (r = 1; r <= NumOfRows; r++) {
//         printf("*");
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int NumOfRows, r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &NumOfRows);

    // Using a nested for loop to print a pattern
    for (r = 1; r <= NumOfRows; r++) {
        for (c = 1; c <= r; c++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}   