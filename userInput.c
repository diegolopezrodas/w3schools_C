/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/27/2025
    UPDATED DATE   : 06/27/2025
    Description    : Following the C User Input page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    /*********************************************************************************
      In order to take a user's imput, scanf() function is used
      scanf() takes two agruements: format specifier and reference operator (&variable)
      The reference operator stores the memory address of the variable
     *********************************************************************************/

    int takeInt;

    printf("Type a number:\n");
    scanf("%d", &takeInt);

    printf("\nYou entered: %d\n\n", takeInt);

    //scanf() can take multiple inputs
    int  userInt;
    char userChar;

    printf("Type a number and a character, then press enter:\n");
    scanf("%d %c", &userInt, &userChar);

    printf("\nYou entered: %d AND %c\n\n", userInt, userChar);

    //scanf() can take in strings
    char username[30];

    printf("Enter your username:\n");

    /****************************************************
      reference operator (&) does not need to be used AND

      scanf() consider space (whitespace, tabs, etc) as
      a terminating character, fgets() is used to read a
      line of text
     ****************************************************/
    scanf("%s", username);

    printf("\nHello %s\n\n", username);

    return 0;
}
