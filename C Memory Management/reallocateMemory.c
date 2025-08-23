/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 08/23/2025
    UPDATED DATE   : 08/23/2025
    Description    : Following the C Reallocate Memory's instructions from w3schools.

 **************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){

   /********************************************************************
     Reallocating reserves a different (usually larger) amount of memory
     WHILE keeping the data stored in it
    ********************************************************************/

   int *ptr1, *ptr2, size;

   //Allocating memory for four int's for ptr1
   size = 4 * sizeof(*ptr1);
   ptr1 = malloc(size);

   printf("%d bytes allocated at address %p\n", size, ptr1);

   //Resizing the memory to hold six integers for ptr2
   size = 6 * sizeof(*ptr1);
   ptr2 = realloc(ptr1, size);

   printf("%d bytes reallocated at address %p\n", size, ptr2);

   /*************************************************
     realloc() can return NULL if it fails or is not
     able to alllocate more memory, SO use if-block
     to failproof code: 

     ptr2 = realloc(ptr1, size);
     if(ptr2 == NULL){ FAILURE...}
     else{ SUCCESS... }
    *************************************************/

   /**************************************************************
     Always free, or release, allocated memory when done using it:
      free(ptr1);
    **************************************************************/

   return 0;
}
