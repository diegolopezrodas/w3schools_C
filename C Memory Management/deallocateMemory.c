/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 08/23/2025
    UPDATED DATE   : 08/23/2025
    Description    : Following the C Deallocate Memory's instructions from w3schools.

 **************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){

   /*****************************************************************************
     When a block of memory is no longer needed it should be deallocated
     Dynamic memory stays reserved until it is deallocated or until program ends
    *****************************************************************************/

   //free() function used to deallocate memory
   int *ptr;
   ptr = malloc(sizeof(*ptr));

   free(ptr);
   ptr = NULL; // Best practice to set ptr to NULL after freeing memory to avoud accidentally using it 

   /************************************************************************************************
     Memory Leak happens when dynamic memory is allocated but never freed
     If it occurs frequently, then it could take up too much memory and cause computer to slow down
    ************************************************************************************************/

   return 0;
}
