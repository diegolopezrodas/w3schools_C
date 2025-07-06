/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/06/2025
    UPDATED DATE   : 07/06/2025
    Description    : Following the C Functions page's instructions from w3schools.

 **************************************/

#include <stdio.h>

/*******************************************
  This function takes in the parameter name
  and prints the String
 *******************************************/
void printString(char name[]){
    printf("Hello, %s\n", name);
}

/****************************************
  Functions can take multiple parameters
 ****************************************/
void calculateSum(int x, int y){
    int sum = x + y;
    printf("The sum of %d + %d is: %d\n", x, y, sum);
}

/************************************************
  Functions can have arrays passed as parameters
 ************************************************/
void printIntArray(int array[5]){
    for(int i = 0; i < 5; i++){
      printf("Index %d - [%d]\n", i, array[i]);
    }
}

/*******************************************************
  To return a value, a datatype is used inplace of void
  And then word return keyword is used inside function
 *******************************************************/
float toCelsius(float fahrenheit){
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main(void){

    /**********************************************
      Diego and Ale are agruments for printString()
     **********************************************/
    printf("Calling printString():\n\n");
    printString("Diego");
    printString("Ale");
    printf("\n");

    printf("Calling calculateSum():\n\n");    
    calculateSum(3, 7);
    calculateSum(-5, 20);
    printf("\n");

    //Making array for it to be used as argument
    int array[5] = {-4, 21, -27, 25, 0};

    printf("Calling printIntArray():\n\n");
    printIntArray(array);
    printf("\n");

    printf("Calling toCelsius():\n\n");
    printf("%.2f in fahrenheit to Celsius: %.2f\n", 73.50, toCelsius(73.50));

    return 0;
}
