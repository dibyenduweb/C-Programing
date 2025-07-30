#include <stdio.h>
//file io in c programming 
int main(){
// Open a file append mode, w for write mode, r for read mode
    char line[100];
    
    FILE *filePointer = fopen("example.txt", "r");

    fgets(line,100, filePointer);
    fgets(line,100, filePointer);
    printf("%s", line);

    // fprintf(filePointer, "Hello c !\n");

    fclose(filePointer);
    return 0;
}

