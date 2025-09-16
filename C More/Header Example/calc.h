/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 09/15/2025
    UPDATED DATE   : 09/15/2025
    Description    : Following the C Organize Code's instructions from w3schools.

 **************************************/


/****************************************************************
  The #ifndef, #define, and #endif are called include guards
  They prevent the code from being including more than once
  by mistake, this is recommended practice in ALL C header files
 ****************************************************************/

#ifndef  CALC_H
#define CALC_H

    int add(int x, int y);
    int subtract(int x, int y);

#endif
