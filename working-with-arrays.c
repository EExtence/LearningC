#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    statically sized array:
        -stack based memory
        -size determined at compile time
    */

//    int my_array[5] = {0}; //declares an array that has five bytes of memory allocated to storage

//    int i;
//    for(i = 0; i < 5; ++i) 
//    {
//         printf("%d: %d\n", i, my_array[i]);
//    }

//     my_array[1] = 1337;
//     my_array[4] = 4096;

//     for(i = 0; i < 5; ++i) 
//    {
//         printf("%d: %d\n", i, my_array[i]);
//    }



    /*
    dynamically stored array
        -heap based memory
        -size determined at run time
    */

   // 5 element int array
    int *my_array = malloc( sizeof(int) * 5 );

    
    
    int i;
    for(i = 0; i < 5; ++i) {
        printf("%d: %d\n", i, my_array[i]);
    }

    my_array[1] = 5476;
    my_array[4] = 1109;

    for(i = 0; i < 5; ++i) {
        printf("%d: %d\n", i, my_array[i]);
    }
    
    
    free(my_array);
    return 0;
}