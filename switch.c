/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/20/2025
    UPDATED DATE   : 06/20/2025
    Description    : Following the C Switch page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    /**********************************************************
     How switch works:
       1 - expression evaluated once
       2 - value of expression compared to values of each case
       3 - match = code block execution
       4 - break statement breaks out of code block
       5 - default is optional and specifies block if no match
     **********************************************************/

    int day = 6;

    switch (day){
        case 1:
            printf("Monday\n\n");
            break;
        case 2:
            printf("Tuesday\n\n");
            break;
        case 3:
            printf("Wednesday\n\n");
            break;
        case 4:
            printf("Thrusday\n\n");
            break;
        case 5:
            printf("Friday\n\n");
            break;
        case 6:
            printf("Saturday\n\n");
            break;
        case 7:
            printf("Sunday\n\n");
            break;
    }

    int hour = 4;

    switch (hour){
        case 1:
            printf("Good morning\n\n");
            break;
        case 2:
            printf("Good afternoon\n\n");
            break;
        case 3:
            printf("Good evening\n\n");
            break;
        default:
            printf("Welcome to the Dark Hour\n\n");
    }

    return 0;
}
