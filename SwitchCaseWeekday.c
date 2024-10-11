/*
Project: SwitchCase
 author: Michael Good
 date: 10.10.2024
 version: 0.0.1
 contact: michael.good@bzbs.ch
 */

//includes
#include <stdio.h>
#include <string.h>

//global Variables
int tag = 0;

//Function Prototyping
void SwitchCase();

//Main Program
int main(void){
    SwitchCase();
    return 0;
}

//Functions
void SwitchCase(){

    //local Variables in Function
    char day[20];  // To store user input

    printf("Please enter the day you want to see: ");
    scanf("%s", day);

    // Convert the input string to a corresponding integer
    if (strcmp(day, "Monday") == 0 || strcmp(day, "monday") == 0) {
        tag = 1;
    } else if (strcmp(day, "Tuesday") == 0 || strcmp(day, "tuesday") == 0) {
        tag = 2;
    } else if (strcmp(day, "Wednesday") == 0 || strcmp(day, "wednesday") == 0) {
        tag = 3;
    } else if (strcmp(day, "Thursday") == 0 || strcmp(day, "thursday") == 0) {
        tag = 4;
    } else if (strcmp(day, "Friday") == 0 || strcmp(day, "friday") == 0) {
        tag = 5;
    } else if (strcmp(day, "Saturday") == 0 || strcmp(day, "saturday") == 0) {
        tag = 6;
    } else if (strcmp(day, "Sunday") == 0 || strcmp(day, "sunday") == 0) {
        tag = 7;
    } else {
        tag = 0;  // Invalid day
    }

    // Use switch-case with the integer 'tag'
    switch (tag) {
        case 1: printf("It's the first day of the week\n");
        break;
        case 2: printf("It's the second day of the week\n");
        break;
        case 3: printf("It's the third day of the week\n");
        break;
        case 4: printf("It's the fourth day of the week\n");
        break;
        case 5: printf("It's the fifth day of the week\n");
        break;
        case 6: printf("It's the sixth day of the week\n");
        break;
        case 7: printf("It's the seventh day of the week\n");
        break;
        default: printf("You entered an invalid day\n");
        break;
    }
}
