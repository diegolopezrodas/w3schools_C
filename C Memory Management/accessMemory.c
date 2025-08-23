/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 08/23/2025
    UPDATED DATE   : 08/23/2025
    Description    : Following the C Access Memory's instructions from w3schools.

 **************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    /***************************************************************************************
      Dynamic Memory behaves like an array, with data type specified by type of the pointer
      To access element in dynamuc memory refer to its index number
      You can also dereference the pointer to access first element
     ***************************************************************************************/

    // Allocating Memory
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));

    // Writing to Memory
    *ptr   = 2;
    ptr[1] = 4;
    ptr[2] = 6;

    // Reading from memory
    printf("%d\n", *ptr);
    printf("%d, %d, %d, %d\n\n", ptr[0], ptr[1], ptr[2], ptr[3]);

    return 0;
}
