/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/12/2025
    UPDATED DATE   : 07/12/2025
    Description    : Following the C Files page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    /**********************************************************
      You can create, open, and read files by declaring
      a pinter to type FILE and using fopen() function.
      fopen() parameters:
       filename = the name of file you want to open or create
       mode     = single char representing what will happen to 
                  the file:
                  w - Writes a file
                  a - Appends new data to a file
                  r - Reads from a file
     **********************************************************/

    FILE *fptr;

    //Creating testFile.txt with mode w since it doesn't exist
    fptr = fopen("testFile.txt", "w");

    //Closing the file
    fclose(fptr);

    return 0;
}
