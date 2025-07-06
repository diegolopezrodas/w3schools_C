/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/19/2025
    UPDATED DATE   : 06/19/2025
    Description    : Following the C Booleans page's instructions from w3schools.

 **************************************/

#include <stdio.h>
#include <stdbool.h>

int main(void){

    //SECTION 1 - Booleans

    /*************************************************
       Booleans introduced in C99, so importing
       of stdbool.h is needed to use the datatype.
       Boolean values return as int, so %d in printf:
         0                      = false
         1[or any other number] = true
     *************************************************/

    bool thisIsT = true;
    bool thisIsF = false;

    printf("Printing thisIsT: %d\n", thisIsT);
    printf("Printing thisIsF: %d\n\n", thisIsF);

    /*****************************************************
       Comparing values and variables returns 0 and 1.
       Essentiatlly returning booleans, and NOT exclusive
       to only number values and structures (like arrays).
     *****************************************************/

    int num1 = 64;
    int num2 = 32;

    printf("Comparing %d & %d with > operator: %d\n", num1, num2, num1 > num2);
    printf("Comparing %d & %d with == operator: %d\n\n", num1, num2, num1 == num2);

    bool myTrue1 = true;
    bool myTrue2 = true;

    printf("Comparing two booleans (both are set to true): %d\n\n", myTrue1 == myTrue2);

    return 0;
}
