/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/04/2025
    UPDATED DATE   : 07/04/2025
    Description    : Following the C Memory Address page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    /*******************************************************************
      When variable is created, address is assigned to the variable
      To access this address on the computer, use reference operator (&)
     *******************************************************************/

    int myNum = 32;
    printf("The variable's memory address is: %p\n\n", &myNum);

    /************************************************
      &variable is referred to a pointer
      To print a pointer, format specifier %p is used 
     ************************************************/

    return 0;
}
