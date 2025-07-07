/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/07/2025
    UPDATED DATE   : 07/07/2025
    Description    : Following the C Scope page's instructions from w3schools.

 **************************************/

#include <stdio.h>

/********************************************************************
  Variable created outside of a function is called a GLOBAL variable
  And it belongs to the GLOBAL SCOPE
 ********************************************************************/
int globalIntVariable = 100;


void localScopeExample(){

    /******************************************************
      Local variable that belongs to localScopeExample()
      myNum CANNOT be used outside of function
      WILL result in ERROR if attempted to be used outside
     ******************************************************/

    int myNum = -30;
    printf("My LOCAL int variable is: %d\n", myNum);
    printf("My GLOBAL int variable is: %d\n", globalIntVariable);
}

int main(void){

    /******************************************************************
      Variables are ONLY accessible in the region they are creating in
      This is known as scope
     ******************************************************************/

    printf("First time printing my GLOBAL int variable %d\n\n", globalIntVariable);

    printf("Calling localScopeExample():\n\n");
    localScopeExample();

    /**********************************************************************************
      A LOCAL variable and GLOBAL variable can share the same name
      Within the function the LOCAL variable was created, it will take precedence
      Ex. if variable is printed, then the value will be of the local in said function
      HOWEVER, you should using the SAME variable name
     **********************************************************************************/

    return 0;
}
