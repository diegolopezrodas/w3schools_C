/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/23/2025
    UPDATED DATE   : 06/24/2025
    Description    : Following the C Arrays page's instructions from w3schools.

 **************************************/

#include <stdio.h>

int main(void){

    //SECTION 1 - Arrays

    //Creating an int array with specified size (5 elements)
    int myNumbers[5] = {22, 33, 44, 55, 66};

    //Looping through myNumbers int array
    for(int index = 0; index < 5; index++){
      printf("My number on index %d is %d\n", index, myNumbers[index]);
    }
    printf("\n");

    //SECTION 2 - Array Size

    /*************************************************************************************************************
       Inorder to get the size of an array, you use the sizeof() operator.
       But since this returns the size of the array in bytes, you have to divide it by the sizeof() first element.
       For example, 
         int myNums[2] = {4, 3}; 
         sizeof(myNums) is 8 bytes, but if you divided it by 4 bytes then 8/4 = 2 elements
       Better to use sizeof(array)/sizeof(array[0]) to loop, since arrays can have undefined size
     *************************************************************************************************************/

    int getSizeOfNums[] = {55, 44, 33, 22, 11};
    int theSizeOfNums   = sizeof(getSizeOfNums) / sizeof(getSizeOfNums[0]);

    printf("Size of the array in bytes is %zu bytes\n", sizeof(getSizeOfNums));
    printf("Size of the array is %d elements\n\n", theSizeOfNums);

    //SECTION 4 - Multidimensional Arrays

    /****************************************************************************************
       A mutli array is used to get data in tabular form
       int matrix[2][3], the first [] defines number of rows and second [] is number of columns
     ****************************************************************************************/

    int matrix[2][3] = {{1, 2, 3}, {3, 2, 1}};

    int rowLength = sizeof(matrix)/sizeof(matrix[0]); 
    int colLength = sizeof(matrix[0])/sizeof(matrix[0][1]);

    printf("Row length: %d\n", rowLength);
    printf("Column length: %d\n", colLength);
    printf("\n");

    for(int i = 0; i < rowLength; i++){
      for(int j = 0; j < colLength; j++){
        printf("[%d] ", matrix[i][j]);
      }
      printf("\n");
    }
    printf("\n");

    return 0;
}
