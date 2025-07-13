/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/13/2025
    UPDATED DATE   : 07/13/2025
    Description    : Following the C Files page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    FILE *fptr;

    //Opening file in writing mode
    fptr = fopen("testWriteFile.txt", "w");

    //Using fprintf() function to write into the testWriteFile.txt file
    fprintf(fptr, "This is text written on \"Writing\" Mode\n");

    //Closing file
    fclose(fptr);

    //Opening file in appending mode to keep previous data
    fptr = fopen("testWriteFile.txt", "a");

    //Using fprint() function to append into file
    fprintf(fptr, "This is text written on \"Appending\" Mode\n");

    //Closing the file
    fclose(fptr);

    return 0;
}
