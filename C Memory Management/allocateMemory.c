/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 08/22/2025
    UPDATED DATE   : 08/22/2025
    Description    : Following the C Memory Management's instructions from w3schools.

 **************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    /**************************************************
      Process of reserving memory is called Allocation
      C has 2 types of memory: Static and Dynamic
     **************************************************/

    /*******************************************
      STATIC MEMORY - 
       Memory reserved for variables BEFORE the program runs
       Allocation of static memory known as COMPITLE TIME MEMORY ALLOCATION
     *******************************************/

    int students[20];
    printf("Size of students variable: %zu bytes\n\n", sizeof(students)); //Should print 8 bytes

    /*******************************************
      DYNAMIC MEMORY -
       Memory allocated AFTER the program starts running
       Allocation of dynamic memory known as RUNTIME MEMORY ALLOCATION
       You have FULL control over how much memory used
       It can only be accessed with pointers
       You use:
        malloc() or calloc() functions to allocate dynamic memory
        <stdlib.h> to call functions
     *******************************************/

    /********************************
      int *ptr1 = malloc(size);
       - One parameter, size, that specifies how much memory to allocate (in bytes)
       + It is unpredictable, make sure to write something into it before reading it
      int *ptr2 = callloc(amount,size);
       - amount : specifies amount of items to allocate
       - size   : specifies the size of each item measured in bytes
       + It writes zeroes into all allocated memory, makes it slightly less efficient 
     ********************************/

    /********************************
      Best way to allocate with the right amount of memory for data type is to use sizeof():
       int *ptr1, *ptr2;
       ptr1 = malloc(sizeof(*ptr1));
       ptr2 = calloc(1, sizeof(*ptr2));
     ********************************/

    int *teachers;
    int numTeachers = 12;
    teachers = calloc(numTeachers, sizeof(*teachers));
    printf("Size of teachers memory: %lu bytes\n\n", numTeachers * sizeof(*teachers)); //Should print 48 bytes

    return 0;
}
