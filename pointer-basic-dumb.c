#include <stdio.h>

int main() {
    int x = 4; //integer(type of var) with the name x(name of variable) is set to 4(value of variable)
    int * px = &x; //integer pointer(points to 4 byte value(integer)) named px(name of pointer) is set to the address of x  (address meaning address in memory)
    // when asteriks is next to a type(int in this case), it modifies the type to become a pointer to a typeO

    int y = *px; //integer named y is set to the thing pointed to by px
    // when asteriks is used alone in this way, its called a D reference. It means go to the address pointed to by the pointer and grab that value

    printf("%i", y);

    return(0);
}
