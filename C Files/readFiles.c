/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/13/2025
    UPDATED DATE   : 07/13/2025
    Description    : Following the C Files page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    //Opening file in read mode
    FILE *fptr;
    fptr = fopen("testWriteFile.txt", "r");    

    //Storing content from file in String
    char fileContent[100];

    /************************************************************
      Function fgets() is used to get the content of a file
      fgets() has three parameters:
       1 - specifies where to store content of file (the String)
       2 - Max size of data to read, MATCH the String size
       3 - The file pointer associated/pointing with file
     ************************************************************/
    fgets(fileContent, 100, fptr);

    //Printing the file's content
    printf("%s", fileContent);

    //Closing the file
    fclose(fptr);

    //To get every line in a file, a while loop can be used
    printf("\nUsing a while loop to go through each line:\n\n");

    fptr = fopen("testWriteFile.txt", "r");

    while(fgets(fileContent, 100, fptr)){
        printf("%s", fileContent);
    }

    fclose(fptr);

    return 0;
}
