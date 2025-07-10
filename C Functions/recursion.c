/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/10/2025
    UPDATED DATE   : 07/10/2025
    Description    : Following the C Recursion page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int sumRange(int num);

int main(void){

    /***********************************************************
      Recursion is a technique of making function call itself
      Helps break complicated problems into easier to problems
     ***********************************************************/

    int result = sumRange(9);
    printf("Adding numbers from range 0 to %d = %d\n\n", 9, result);

    return 0;
}

int sumRange(int num){
    if (num > 0){
        return num + sumRange(num - 1);
    }
    else{
        return 0;
    }
}
