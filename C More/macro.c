/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 08/23/2025
    UPDATED DATE   : 08/23/2025
    Description    : Following the C Macro's instructions from w3schools.

 **************************************/

#include <stdio.h>

// Macro is a name that represents a value or a piece of code, defined by using #define
#define PI 3.14
#define SQUARE(x) ((x) * (x))

int main(void) {

    printf("Value of PI: %.2f\n", PI);
    printf("Square of 4: %d\n", SQUARE(4));

    /************************************************
      Conditional Compilation -
       #ifdef and #ifndef directives let you include or skip parts of code
       depending whether macro is defined, this is useful for debugging or
       creating different versions of a program
     ************************************************/

    // If DEBUG is defined, the message will be printed, if not its skipped
    #ifdef DEBUG
        printf("Debug mode is ON\n");
    #endif

    return 0;
}
