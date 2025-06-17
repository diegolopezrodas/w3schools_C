/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/16/2025
    UPDATED DATE   : 06/17/2025
    Description    : Following the C Operators page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void) {

   /******************************************
      C Operators are put into follow groups:
        - Arithmetic
        - Assignment
        - Comparison
        - Logical
        - Bitwise
    ******************************************/

   //Arithmetic Operators

     //Declaring variables to be used
     int num1 = 20;
     int num2 =  5;

     printf("Arithmetic Operators (using numbers %d & %d):\n\n", num1, num2);

     printf("Addition Operator (+): %d\n", num1 + num2);
     printf("Subtraction Operator (-): %d\n", num1 - num2);
     printf("Multiplication Operator (*): %d\n", num1 * num2);
     printf("Division Operator (/): %d\n", num1 / num2);
     printf("Modulus Operator (%%): %d\n", num1 % num2);
     printf("Increment Operator (++): %d\n", ++num1);
     printf("Decrement Operator (--): %d\n\n", --num1);

   //Assignment Operators

     //Operator =  
     int x = 4;

     printf("Assignment Operators (using number %d):\n\n", x);

     //Operator +=
     x+=3; //Currently x = 7
     printf("+= Operator: %d\n", x);

     //Operator -=
     x-=3; //Currently x = 4
     printf("-= Operator: %d\n", x);

     //Operator *=
     x*=3; //Currently x = 12
     printf("*= Operator: %d\n", x);

     //Operator /=
     x/=3; //Currently x = 4
     printf("/= Operator: %d\n", x);

     //Operator %=
     x%=3; //Currently x = 1
     printf("%%= Operator: %d\n", x);

     //Operator &= (BITWISE AND ASSIGNMENT Operator)
     x&=3; //Currently x = 1 (0001) AND 3(0011) = 1 (0001) 
     printf("&= Operator: %d\n", x);

     //Operator |= (BITWISE OR ASSIGNMENT Operator)
     x|=3; //Currently x = 1(0001) OR 3(0011) = 3 (0011)
     printf("|= Operator: %d\n", x);

     //Operator ^= (BITWISE XOR ASSIGNMENT Operator)
     x^=4; //Currently x = 3 (0011) XOR 4 (0100) = 7 (0111)
     printf("^= Operator: %d\n", x);

     //Operator >>=
     x>>=2; //Currently x = 7 (00000111) shifted 2 bits right = 1 (00000001)
     printf(">>= Operator: %d\n", x);

     //Operator <<=
     x<<=3; //Currently x = 1 (00000001) shifted 3 bits left =  8 (00001000)
     printf("<<= Operator: %d\n\n", x);

   //Comparison Operators

     //Declaring variables
     int compNum1 = 4;
     int compNum2 = 6;

     printf("Comparison Operators (using numbers %d & %d):\n\n", compNum1, compNum2);

     //Operator ==
     printf("== Operator: %d\n", compNum1 == compNum2);

     //Operator !=
     printf("!= Operator: %d\n", compNum1 != compNum2);

     //Operator >
     printf("> Operator: %d\n", compNum1 > compNum2);

     //Operator <
     printf("< Operator: %d\n", compNum1 < compNum2);

     //Operator >=
     printf(">= Operator: %d\n", compNum1 >= compNum2);

     //Operator <=
     printf("<= Operator: %d\n\n", compNum1 <= compNum2);

   //Logical Operators

     //Declaring variables
     int logNum1 = 10;
     int logNum2 = 20;

     printf("Logical Operators (using numbers %d & %d):\n\n", logNum1, logNum2);

     //Operator && (AND)
     printf("&& Operator: %d\n", logNum1 < 5 && logNum2 > 5);

     //Operator || (OR)
     printf("|| Operator: %d\n", logNum1 < 5 || logNum2 > 5); 

     //Operator NOT (!)
     printf("! Operator: %d\n\n", !(logNum1 < 5 && logNum2 > 5)); 

   return 0;
}
