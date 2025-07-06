/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/21/2025
    UPDATED DATE   : 06/21/2025
    Description    : Following the C While Loop page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    //SECTION 1 - While Loop

    //Incrementing
    int i = 0;

    while(i < 5){
      printf("%d\n", i);
      i++;
    }

    printf("\n");

    //Decrementing
    int countdown = 3;

    while(countdown > 0){
      printf("%d\n", countdown);
      countdown--;
    }

    printf("\n");

    //SECTION 2 - Do/While Loop

    //Loop will always be executed at least once, even if condition is false
    int trueFromStart = 0;

    do{
      printf("%d\n", trueFromStart);
      trueFromStart++;
    } while(trueFromStart < 5);

    printf("\n");

    //Condition is False from the Start
    int falseFromStart = 10;

    do{
      printf("%d\n", falseFromStart);
      falseFromStart++;
    } while(falseFromStart < 5);

    return 0;
}
