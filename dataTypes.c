/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/13/2025
    UPDATED DATE   : 06/13/2025
    Description    : Following the "C Data Types" page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    //SECTION 1 - Data Types

    /******************************************************************************************************************
     BASIC DATA TYPES -
       int:    size=[2 or 4 bytes], desc=[store whole numbers],                                             ex=[-1]
       float:  size=[4 bytes],      desc=[store fractional numbers, sufficient storing 6-7 decimal digits], ex=[1.99]
       double: size=[8 bytes],      desc=[store fractional numbers, sufficient storing 15 decimal digits],  ex=[1.99]
       char:   size=[1 byte],       desc=[store single character/letter/number or ASCII num],               ex=['D']
     ******************************************************************************************************************/

    /*************************************
     FORMAT SPECIFIERS - 
       int:                    %d or %i
       float:                  %f or %F
       double:                 %lf
       char:                   %c
       strings(array of char): %s
     *************************************/

    //SECTION 2 - Characters

    //char can store characters in ''
    char myChar = 'd';
    printf("My character is: %c\n\n", myChar);

    //Alternatively, ASCII values can be used instead of ''
    char a = 65, b = 66, c = 67;
    printf("First uppercase letter: %c\n", a);
    printf("Second uppercase letter: %c\n", b);
    printf("Third uppercase letter: %c\n\n", c);

    //Strings are char arrays, if [] not included it may print LAST character ONLY
    //char myWrongText = 'Hello';
    //printf("Incorrect text: %c\n", myWrongText);

    //Correct Version of string
    char myCorrectText[] = "Hello";
    printf("Correct text: %s\n\n", myCorrectText);

    //SECTION 3 - Numbers 

    return 0;
}
