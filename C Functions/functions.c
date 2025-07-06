/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/05/2025
    UPDATED DATE   : 07/05/2025
    Description    : Following the C Functions page's instructions from w3schools.

 **************************************/

#include <stdio.h>

/*******************************************************
  myFunction() is name of function
  void means it does not return a value
  Inside the function is the code that runs once called
 *******************************************************/

void myFunction(){
    printf("I just got executed\n");
}

int main(void){

    /***********************************************************
      Functions are a blocks of codes that run only when called
      Data can passed, known as parameters, into a function
      Examples of predefined functions: printf() & main()
     ***********************************************************/

    myFunction();
    myFunction();

    return 0;
}
