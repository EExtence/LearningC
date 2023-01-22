/*
Test bits of code or work out ideas in here
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num; //declares an int variable called num
    FILE *filetime; // declares a pointer of type file (i THINK it means that it points to the locations of the file in memory. FILE is just the type of variable thats being declared)

    
    filetime = fopen("/Users/eleanorextence/Desktop/Programming/C-example-code/LearningC/infinite-monkeys/highscore.txt", "r+");
    
    char funko[4] = "rssf";
    int x = 22;
    

    fprintf(filetime, "%d\n%s", x, funko);
    
    
    
    // int score = 25;
    // char text[4] = "qwer";
    
    // fprintf(filetime, "%d\r\n%s", score, text);
    
    
    
    


    return 0;
}