/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/08/2025
    UPDATED DATE   : 07/08/2025
    Description    : Following the C Function Declaration page's instructions from w3schools.

 **************************************/

#include <stdio.h>

//Function Declaration
int addingFunction(int x, int y);
void printingFunction();

int main(void){

    /************************************************************************
      Function consists of two parts:
       Declaration: the function's name, return type, and parameters (if any)
       Definition: the body of the function (code to be executed)
      For code optimization, declarationa and definition should be seperate
     ************************************************************************/

    printf("Calling addingFunction:\n\n");
    printf("Adding %d and %d = %d\n", 3, 4, addingFunction(3, 4));

    return 0;
}

//Function Definition
int addingFunction(int x, int y){
    printingFunction();
    return x + y;
}

void printingFunction(){
    printf("I am the printingFunction\n\n");
}
