/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/22/2025
    UPDATED DATE   : 06/22/2025
    Description    : Following the C For Loop page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    //SECTION 1 - For Loop

    //Increment
    for (int i = 0; i < 5; i++) {
      printf("%d\n", i);
    }
    printf("\n");

    //Decrement
    for (int i = 5; i > 0; i--) {
      printf("%d\n", i);
    }
    printf("\n");

    //SECTION 2 - Nested Loops

    int i, j;

    //Outer Loop
    for (i = 1; i < 3; i++) {
      printf("Outer Loop: %d\n", i); //Executed 2 times

      //Inner Loop
      for (j = 1; j < 4; j++) {
        printf(" Inner Loop: %d\n", j); //Executed 6 times
      }
    }

    return 0;
}
