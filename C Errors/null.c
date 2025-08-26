/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 08/24/2025
    UPDATED DATE   : 08/24/2025
    Description    : Following the C NULL's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    /******************************************************************************
      NULL represents a "null pointer," pointer that does not point to anything
      You can compare a pointer to NULL to check if is safe use
      Many C functions return NULL when something goess wrong (ie. fopen() returns
      NULL if it is unable to open a file)
     ******************************************************************************/

    FILE *fptr = fopen("notAFile.txt", "r");
    if(fptr == NULL){
      printf("Could not open file.\n");
    }

    fclose(fptr);

    return 0;
}
