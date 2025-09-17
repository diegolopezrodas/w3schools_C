/**************************************

    CREATED BY     : Diego Lopez-Rodas
    CREATION DATE  : 09/15/2025
    UPDATED DATE   : 09/15/2025
    Description    : Following the C Date's instructions from w3schools.

 **************************************/

#include <stdio.h>
#include <time.h>

int main(void) {

    time_t currentTime; // Variable with datatype of time_t
    time(&currentTime); // time() functions returns current time of type time_t

    // ctime() used to convert time_t to a readable string
    printf("Current time: %s\n\n", ctime(&currentTime));

    /**************************************************************************
      To gather individual parts of date or time, function localtime() is used
      Which converts current time into a struct tm
     **************************************************************************/

    time_t now   = time(NULL);
    struct tm *t = localtime(&now);  // Converting now to local time structure

    printf("Year: %d\n", t->tm_year + 1900); // Add 1900 to get true year
    printf("Month: %d\n", t->tm_mon + 1);    // Months are numbered 0 to 11, so 1 must be added
    printf("Day: %d\n", t->tm_mday);
    printf("Hour: %d\n", t->tm_hour);
    printf("Minute: %d\n", t->tm_min);
    printf("Second: %d\n\n", t->tm_sec);

    // strftime() is used to format the date and time as a string
    char buffer[100];

    strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", t);
    printf("Formatted time: %s\n\n", buffer);

    return 0;
}


