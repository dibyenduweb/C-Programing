#include <stdio.h>

int main() {
    int MathGrade;
    printf("Enter your Math Grade: \n");
    scanf("%d", &MathGrade);

    if(MathGrade <33){
        printf("You are Failed in Math.\n");
    } 
     if(MathGrade >= 90) {
            printf("Your Grade is A.\n");
        } else if(MathGrade >= 80) {
            printf("Your Grade is B.\n");
        } else if(MathGrade >= 70) {
            printf("Your Grade is C.\n");
        } else if(MathGrade >= 60) {
            printf("Your Grade is D.\n");
        } else {
            printf("Your Grade is E.\n");
        }
    }