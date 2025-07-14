/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/14/2025
    UPDATED DATE   : 07/14/2025
    Description    : Following the C Structures page's instructions from w3schools.

 **************************************/

#include <stdio.h>
#include <string.h>

/**********************************************************
  structs are a way to group many variables into one place
  Each variable in struct is known as a member
  Each varaible can be of different data types
 **********************************************************/

struct testStructure{ //Structure declaration
    int  myNum;       //Member 
    char myChar;      //Member
    char myString[30];    //Member
};                    //MUST end structure with semicolon

int main(void){

    //Creating structure variable of testStructure called s1
    struct testStructure s1;

    //Assign values to members in s1
    s1.myNum  = 32;
    s1.myChar = 'c';
    strcpy(s1.myString, "This is text"); //In order to copy string into a member, strcopy() function used to avoid error

    //Printing s1's members
    printf("Printing s1's members:\n\n");
    printf("My number in s1: %d\n",      s1.myNum);
    printf("My character in s1: %c\n",   s1.myChar);
    printf("My string in s1: %s\n\n", s1.myString);

    //Simpler Assignment Syntax
    struct testStructure s2 = {64, 'A', "This is more text"};
    
    //Printing s2's members
    printf("Printing s2's members:\n\n");
    printf("My number in s2: %d\n",      s2.myNum);
    printf("My character in s2: %c\n",   s2.myChar);
    printf("My string in s2: %s\n\n", s2.myString);

    //Copying structures
    struct testStructure s3;
    s3 = s1;

    //Printing s3's members
    printf("Printing s3's members:\n\n");
    printf("My number in s3: %d\n",      s3.myNum);
    printf("My character in s3: %c\n",   s3.myChar);
    printf("My string in s3: %s\n\n", s3.myString);

    //Modifying s3's members
    s3.myNum  = 40;
    s3.myChar = 't';
    strcpy(s3.myString, "This is new text");

    //Printing s3's members
    printf("Printing s3's NEW members:\n\n");
    printf("My number in s3: %d\n",      s3.myNum);
    printf("My character in s3: %c\n",   s3.myChar);
    printf("My string in s3: %s\n\n", s3.myString);

    return 0;
}
