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

    /*********************************************************
     float vs. double:
       The difference between the two is precision of how many
       digits the value can have after the decimal point.

       float  = six or seven digits
       double = 15 digits

       So its safer to use double for most calculations,
       but takes twice as much memory.
     *********************************************************/

    /*************************************
       Scientific Notation - 
         float:  number + "e" + exponent
         double: number + "E" + exponent
     *************************************/

    //float representing 1.2 * 10^5
    float sciNotFloat = 12e4;
    printf("The float is: %f\n", sciNotFloat);

    //double representing 1.2 * 10^(-5)
    double sciNotDoub = 12E-6;
    printf("The double is: %f\n\n", sciNotDoub);

    //SECTION 4 - Decimal Precision

    float  decPreFloat = 2.7;
    double decPreDoub  = 50.05;

    printf("Default Decimal Precision: %f\n", decPreFloat);
    printf("One Decimal Precision: %.1f\n", decPreFloat);
    printf("Two Decimal Precision: %.1f\n\n", decPreFloat);

    printf("Default Decimal Precision: %f\n", decPreDoub);
    printf("Two Decimal Precision: %.2f\n", decPreDoub);
    printf("Eight Decimal Precision: %.8f\n\n", decPreDoub);

    //SECTION 5 - Memory Size

    /********************************************************************************************
       To get the size (in bytes) of a datatype/variable you use 'sizeof()' operator
       Format specifer %zu is used as 'sizeof()' returns an 'size_t' type [unsigned integer type] 
     ********************************************************************************************/

     int sizeInt;
     printf("The int's size is %zu bytes\n\n", sizeof(sizeInt));

    //SECTION 6 - Type Conversion

    /********************************************************************************************
       Type Conversion can occur in two ways:
         Implicit Conversion (automatically) & Explicit Conversion (manually)
     ********************************************************************************************/
    
    //Implicit Conversion Example
    float impConFloat = 9; //The 9 is technically an int
    printf("This float is: %f\n", impConFloat); //Converted to 9.000000

    //Explicit Conversion Example
    int num1 = 7;
    int num2 = 2;

    float sum = (float) num1 / num2; //The chosen datatype is put in '()' before the variable
    printf("The sum is: %.1f\n\n", sum);

    return 0;
}
