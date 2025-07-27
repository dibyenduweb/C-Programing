// Increment & Decrement Operators in C
#include <stdio.h>


int main() 
{
    int x = 25;
    // x++; // Increment x by 1
    printf("post incrementing, x = %d\n", x++);
    
    x= 25;
    // ++x; // Pre-increment x by 1
    printf("pre incrementing, x = %d\n", ++x);


    return 0;
}