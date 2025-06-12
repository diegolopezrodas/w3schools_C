/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/10/2025
    UPDATED DATE   : 06/10/2025
    Description    : Following the "C Variables - ALL SECTIONS" page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    //SECTION 1 - Create Variables

    //Declaring variables FIRST
    int   myInt;
    float myFloat;
    char  myChar;

    //Assigning values to the variables
    myInt   = 30;
    myFloat = -12.21;
    myChar  = 'k';

    //SECTION 2 - C Format Specifiers

    //Printing variables using Format Specifiers
    printf("%d\n", myInt);
    printf("%f\n", myFloat);
    printf("%c\n\n", myChar);

    //Printing variables in the SAME printf
    printf("I am %d years old and my favorite number is %f, but my favorite letter is %c.\n", myInt, myFloat, myChar);

    //Printing Values Without Variables
    printf("This is a number: %d\n", -15);
    printf("This is a float: %f\n", 30.03);
    printf("This is a char: %c\n\n", 'O');

    //SECTION 3 - Change Values

    //Assigning previous values to new variables
    int   myOtherInt   = myInt;
    float myOtherFloat = myFloat;
    char  myOtherChar  = myChar;  

    //Assigning new values to old variables
    myInt   = -12;
    myFloat = 9.09;
    myChar  = '!';

    //Printing ALL variables
    printf("My new int is: %d, but my old int is: %d\n", myInt, myOtherInt);
    printf("My new float is: %f, but my old float is: %f\n", myFloat, myOtherFloat);
    printf("My new char is: %c, my old char is: %c\n\n", myChar, myOtherChar);

    //Addition/display of the sums of my two int's and floats
    int   sumInt   = myInt + myOtherInt;
    float sumFloat = myFloat + myOtherFloat;

    printf("The sum of the int's: %d\n", sumInt);
    printf("The sum of the floats: %f\n\n", sumFloat);

    //SECTION 4 - Multiple Variables


    return 0;
}
