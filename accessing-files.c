#include <stdio.h>
#include <stdlib.h>

/*
writes a integer given by user to example-text.txt :3
*/

int main() {
    
    int num; //declares an int variable called num
    
    FILE *filetime; // declares a pointer of type file (i THINK it means that it points to the locations of the file in memory. FILE is just the type of variable thats being declared)

    filetime = fopen("/Users/eleanorextence/Desktop/Programming/C-example-code/LearningC/example-text.txt", "w");

    if(filetime == NULL) {
        printf("ERROR");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(filetime, "%d", num);
    fclose(filetime);


    return 0;
}