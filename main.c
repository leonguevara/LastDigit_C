/*
 *  main.c
 *  LastDigit_C
 *
 *  This program will give you the name of the las digit of the addition of any two given numbers
 *
 *  C Standard: C99
 *
 *  Author: León Felipe Guevara Chávez
 *  email:  leon.guevara@itesm.mx
 *  date:   May 31st, 2017
 */
#include <stdio.h>

int main() {
    int number1, number2, addition;     //  The variables to hold the given numbers and their addition
    short remainder;                    //  To hold the last digit of the addition

    //  We ask for and read two whole numbers
    printf("Give me two numbers:\n");
    scanf("%i %i", &number1, &number2);

    //  We compute the addition of both numbers and the last digit of such addition
    addition = number1 + number2;
    remainder = (short)(addition % 10);

    //  We display the name of the last digit
    switch(remainder) {
        case 1:
            printf("one");
            break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
        default: printf("zero"); break;
    }

    //  We exit main with code 0
    return 0;
}