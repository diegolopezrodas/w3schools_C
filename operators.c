/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/16/2025
    UPDATED DATE   : 06/16/2025
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

   //Declaring variables to be used
   int num1 = 20;
   int num2 =  5;

   //Arithmetic Operators
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


   return 0;
}
