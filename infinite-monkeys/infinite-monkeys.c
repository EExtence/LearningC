#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char alphabet[27] = "abcdefghijclmnopqrstuvwxyz ";
char wanted_sentence[30] = "the quick brown fox jumps over";

/*
generate random string of text that has a defined length and return it (IT WORKS :D)
*/
char* generate_string() {
    char* new_text = malloc( sizeof(char) * 30 );
    int loop_counter;

    
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
    int score;

    int loop_counter;
    for(loop_counter = 0; loop_counter < 30; loop_counter++)
    {
        if(sentence[loop_counter] == wanted_sentence[loop_counter])
        {
            score = score + 1;
        }
    }

    return score;
}


int main() {
    srand( time(0) );
    char* text = generate_string();
    
    int string_score;
    int current_score;

    FILE *highscore_file = fopen("/Users/eleanorextence/Desktop/Programming/C-example-code/LearningC/infinite-monkeys/highscore.txt", "r+");
    if(highscore_file == NULL)
    {
        printf("ERR: opening file");
        exit(1);
    }
    
    int highscore;
    fscanf(highscore_file, "%d", &highscore);

    //loop through generations to find best result
    while(string_score != 30)
    {
        char* text = generate_string();
        int string_score = compare_sentences(text);
        
        //replace score and string if new highscore( PROBLEM AREA )
        if(highscore < string_score)
        {
            fprintf(highscore_file, "%d\n%s\n", string_score, text);
        }
        
        printf("%s\n%i\n", text, string_score);

    };
    fclose(highscore_file);
    

    return(0);
}