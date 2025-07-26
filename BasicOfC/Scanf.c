#include <stdio.h>

int main() {
    
    char name [15];
    int NumOfChicken;

    printf("Enter your name: \n");
    scanf("%s", name);
    printf("How Manny Chicken you want order: \n");
    scanf("%d", &NumOfChicken);
    printf("Hello %s, you have Orderd %d Chicken.\n", name, NumOfChicken);

    return 0;
}