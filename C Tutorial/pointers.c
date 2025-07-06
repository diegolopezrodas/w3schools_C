/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/04/2025
    UPDATED DATE   : 07/04/2025
    Description    : Following the C Pointers page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    //SECTION 1 - Pointers

    /********************************************************************************
      pointer is variable that stores memory address of another variable as its value
      pointer variable is created with the * operator after datatype
     ********************************************************************************/

    int  myNum = 88;
    int* ptrMyNum = &myNum;

    printf("The number: %d\n", myNum);
    printf("The number's memory address: %p\n\n", ptrMyNum);

    //You can dereference a pointer to get the value it is pointing to using * operator (dereference operator)
    printf("Dereferencing the pointer to get value: %d\n\n", *ptrMyNum);

    //SECTION 2 - Pointers & Arrays

    /****************************************************************************
      How are arrays and pointers related?
       Name of the array is actually a pointer to the first element in the array
     ****************************************************************************/

    int myArray[4] = {32, 44, 16, -2};
    printf("The memory address of the array: %p\n", myArray);
    printf("The memory address of the array: %p\n\n", &myArray[0]);

    //So elements of an array can be accessed through pointers
    printf("The first element of the array: %d\n", *myArray);
    printf("The second element of the array: %d\n", *(myArray + 1));

    /*******************************************************************************************
      For simple arrays this maybe exessive, but for large arrays and strings this way is useful
      HOWEVER, handle pointers with care because possible to overwrite other data in memory
     *******************************************************************************************/

    return 0;
}
