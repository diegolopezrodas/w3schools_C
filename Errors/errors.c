/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 08/24/2025
    UPDATED DATE   : 08/24/2025
    Description    : Following the C Errors's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    /**********************************************************************
      Common Compile-Time Errors:
       Missing Semicolon - 
         Code    :
           int x = 5
           printf("%d", x);
         Results :
           error: expected ',' or ';' before 'printf'
       Using Undeclared Variables -
         Code    :
           printf("%d", x);
         Results :
           error: 'x' undeclared
       Mismatched Types
         Code    :
           int x = "Hello";
         Results :
           error: initialization makes integer from pointer without a cast
     **********************************************************************/

    /**********************************************************************
      Common Runtime Errors:
       Dividing by zero - 
         Code    :
           int result = 10 / 0;
           printf("%d", result);
       Accessing out-of-bounds array elements - 
         Code    :
           int nums[3] = {1, 2, 3};
           printf("%d", nums[5]);
       Using freed memory - 
         Code    :
           int* ptr = malloc(sizeof(int));
           *ptr = 10;
           free(ptr);
           printf("%d", *ptr);
     **********************************************************************/


    return 0;
}
