/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 08/26/2025
    UPDATED DATE   : 08/26/2025
    Description    : Following the C Errors's instructions from w3schools.

 **************************************/

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void){

    /************************************************************************************
      C does not have a built-in exception handling (like try/catch),
      instead C uses global error codes and helper functions like perror() and strerror() 
     ************************************************************************************/


    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL) {

        printf("Error opening file.\n");

        // calling perror() function provides more details on what went wrong
        perror("Error opening file.");

        /**********************************************************************
          errno is a global variable that stores the error code of last failed
          operation, errno.h is used to access it and strerror(errno) is used
          to print the message [function from string.h]

          Common Error Codes - 
            ENOENT   =  No such file or directory
            EACCES   =  Permission denied
            ENOMEM   =  Not enough memory
            EINVAL   =  Invalid argument
         **********************************************************************/
        printf("Error: %s\n", strerror(errno));

        // If file does not open, then 1 is return to terminate program
        return 1;

        /*************************************************************************
          exit() can be used to stop the program immediately when an error occurs
          Common Exit Status Codes - 
            0             =  Success - the program completed normally
            1             =  Error - something went wrong
            EXIT_SUCCESS  =  Same as 0 (defined in <stdlib.h>)
            EXIT_FAILURE  =  Same as a non-zero error code (also in <stdlib.h>)
         *************************************************************************/

    }

    fclose(fptr);

    return 0;
}
