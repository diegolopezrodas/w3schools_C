/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/19/2025
    UPDATED DATE   : 06/19/2025
    Description    : Following the C If...Else page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    //SECTION 1 - if

    /*************************************************************************
       C has following conditional statements -
         if      : specify block to be executed, if condition is true 
         else    : specify block to be executed, if same condition is false
         else if : specify new condition to test, if first condition is false
         switch  : specify many alternative blocks of code to be executed
     *************************************************************************/

    if (40 < 100) {
        printf("40 is less than 100\n\n");
    }

    //SECTION 2 - else

    int myNum = 45;
    if (myNum > 50) {
        printf("My number is greater than 50\n\n");
    }
    else {
        printf("My number is less than than 50\n\n");
    }

    //SECTION 3 - else if

    int timeOfDay = 16; 
    if (timeOfDay < 12) {
        printf("Good morning\n\n");
    }
    else if (timeOfDay < 19) {
        printf("Good afternoon\n\n");
    }
    else {
        printf("Good evening\n\n");
    }

    //SECTION 4 - Short Hand If

    /**********************************************************
       AKA ternary operator, because consists of 3 operands
       variable = (condition) ? expersionTrue : expersionFalsel;
     **********************************************************/

    //Instead of wrting:
    int time1 = 20;
    if (time1 < 18) {
        printf("Have a good day\n\n");
    }
    else {
        printf("Have a good evening\n\n");
    }

    //Could be written as
    int time2 = 14;
    (time2 < 18) ? printf("Have a good day\n\n") : printf("Have a good evening\n\n");

    return 0;
}
