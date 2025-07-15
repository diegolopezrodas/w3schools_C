/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 07/15/2025
    UPDATED DATE   : 07/15/2025
    Description    : Following the C Structures page's instructions from w3schools.

 **************************************/

#include <stdio.h>

struct Car{
    char brand[50];
    int year;
};

//Function taking in a pointer to car structure
void updateYear(struct Car *c){
    c->year = 2025;
}

int main(void){

    struct Car myCar = {"BMW", 2024};

    //Declare pointer to a struct
    struct Car *sptr = &myCar;

    //Acessing members of myCar using -> operator
    printf("My car's brand is: %s\n", sptr->brand);
    printf("My car's year is : %d\n\n", sptr->year);

    //Passing pointer to a function
    updateYear(sptr);
    printf("After calling updateYear():\n\n");
    printf("My car's brand is: %s\n", sptr->brand);
    printf("My car's year is : %d\n", sptr->year);

    return 0;
}
