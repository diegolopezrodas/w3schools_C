/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/16/2025
    UPDATED DATE   : 06/16/2025
    Description    : Following the C Constants page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void) {

    //The keyword 'const' is usedto make variables unchangeable and ready-only
    const int minutesPerHour = 60;
    printf("The const int is: %d\n\n", minutesPerHour); 

    /************************
       This would not work:
         const int myNum;
         myNum = 13;
     ************************/

    //GOOD PRACTICE - use uppercase with const variables
    const int BIRTHYEAR = 1987;

    return 0;
}
