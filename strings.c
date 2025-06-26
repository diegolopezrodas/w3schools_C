/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 06/25/2025
    UPDATED DATE   : 06/26/2025
    Description    : Following the C Strings page's instructions from w3schools.

 **************************************/

#include <stdio.h>
#include <string.h>

int main(void){

    //SECTION 1 - Strings

     //C does not have a String type, so an array of char must be used ("" must be used)
     char greetings[] = "Hello World";

     //Format specifer %s is used instead
     printf("%s\n\n", greetings);

     //Since strings are arrays, you can access a specific char referring to its index
     printf("%c\n\n", greetings[0]); //Accessing the first char (the H)

     //You can modify strings just like modifying an array
     greetings[0] = 'J';
     printf("%s\n\n", greetings);    

     //Looping through a String
     int greetingsLength = sizeof(greetings)/sizeof(greetings[0]); //techincally division doesn't need to happen; char size is 1 byte
     for(int i = 0; i < greetingsLength; i++){
       printf("%c\n", greetings[i]);
     }
     printf("\n");

     /**********************************************************************************
       A string can be written like a normal array, but the final element must be a '\0'
       Known as a null terminating character, which tells C it is the end of a string
       '\0' counts as a character in the string's size
      **********************************************************************************/

    //SECTION 2 - Special Characters

     /***************************************************************
       To include ", ', and \ in a string, then \ must come before it
       \ is known as a blackslash escape character
      ***************************************************************/

     char includeDoubQuo[] = "He said, \"Of course, I understand\"";
     printf("%s\n\n", includeDoubQuo);

    //SECTION 3 - String Functions

     //Header file string.h must be included to use string functions

     //String Length
     char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

     printf("The alphabet's string size using sizeof is: %zu\n", sizeof(alphabet));
     printf("The alphabet's string size using strlen is: %zu\n\n", strlen(alphabet));

     //Concatenate Strings
     char str1[20] = "Hello, "; //Size should be large enough to store result
     char str2[]   = "World!";

     strcat(str1, str2); //Concatenate str1 and str2 (and result stored in str1)
     printf("%s\n\n", str1);

     //Copy Strings
     char str3[20] = "Copy this string";
     char str4[20];

     strcpy(str4, str3);
     printf("String 4 is: %s\n\n", str4);

     //Compare Strings
     
     /***********************************
      When comparing strings using strcmp
        0 means its both strings are =
        otherwise a value that is not 0
      ***********************************/

     char string1[] = "Hello";
     char string2[] = "Hello";
     char string3[] = "Hi";

     printf("String 1 and String 2 compared: %d\n", strcmp(string1, string2));
     printf("String 1 and String 3 compared: %d\n", strcmp(string1, string3));

    return 0;
}
