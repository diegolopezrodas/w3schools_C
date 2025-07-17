/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/17/2025
    UPDATED DATE   : 07/17/2025
    Description    : Following the C Enum page's instructions from w3schools.

 **************************************/

#include <stdio.h>

/*********************************************************************************
  Enum is special type that represents a group of constants (unchangeable values)
  Use enum keyword followed by the name, and seperate items with a comma
  If items are not assigned a value, the first item is 0 by default
 *********************************************************************************/

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

enum assignedLevel {
    low    = 26,
    medium = 69,
    high   = 95
};

enum autoLevel {
    L = 1,
    M, //Now 2
    H  //Now 3
};

int main(void){

    //Creating enum variable of enum Level, with value MEDIUM
    enum Level myVar = MEDIUM;

    printf("The Level is: %d\n\n", myVar); //Will print out 1

    enum assignedLevel myAssignedVar = medium;
    printf("The assignedLevel is: %d\n\n", myAssignedVar); //Will print 69

    enum autoLevel myAutoVar = M;
    printf("The autoLevel is: %d\n\n", myAutoVar); //Will print 2

    //Enums are often used with switch statements
    switch (myAutoVar){
        case 1:
            printf("Low Level\n\n");
            break;
        case 2:
            printf("Medium Level\n\n");
            break;
        case 3:
            printf("High Level\n\n");
            break;
    }

    return 0;
}
