/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/16/2025
    UPDATED DATE   : 07/16/2025
    Description    : Following the C Structures page's instructions from w3schools.

 **************************************/

#include <stdio.h>

/****************************************************************
  Unions are like structs, but all members share the same memory
  Meaning only ONE value can be used at a time
 ****************************************************************/

union myUnion{         //Union declaration
    int  myNum;        //Member
    char myChar;       //Member
    char myString[30]; //Member
};

int main(void){

    //Creating a union variable called u1 
    union myUnion u1;

    //Size of a union is always the size of its largest member
    printf("Size of union: %zu bytes\n\n", sizeof(u1));

    u1.myNum  = 20;  //myNum member assigned value of 20 
    u1.myChar = 'A'; //myChar member assigned value of 'A'; since its latest member written, myNum doesn't hold value 20

    printf("This is an unreliable print for myNum member: %d\n", u1.myNum);
    printf("This is a reliable print for myChar member: %c\n\n", u1.myChar);

    return 0;
}
