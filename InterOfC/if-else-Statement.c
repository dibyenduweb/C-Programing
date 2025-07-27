#include <stdio.h>
int main(){

    int Mathgrade;
    printf("Enter your Math grade: \n");
    scanf("%d", &Mathgrade);

    if(Mathgrade<33){
        printf("you are fail in math.\n");
    }else
        printf("you are pass in math.\n");
}