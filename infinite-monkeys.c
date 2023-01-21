#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char alphabet[27] = "abcdefghijclmnopqrstuvwxyz ";
char wanted_sentence[30] = "the quick brown fox jumps over";


// generate random string of text that has a defined length and return it (IT WORKS :D)
char* generate_string() {
    char* new_text = malloc( sizeof(char) * 30 );
    int loop_counter;

    srand( time(NULL) );
    for(loop_counter = 0; loop_counter < 30; loop_counter++)
    {
        new_text[loop_counter] = alphabet[rand() % 27];
    }

    return new_text;
}

/*
Compare generated sentence to wanted sentence and return score of generated sentence
(i.e 10/30 meaining that 10 characters were in the right spot)
*/
int compare_sentences(char sentence[30]) {
    
}


int main() {
    
    char* text = generate_string();
    printf("%s", text);

    return(0);
}