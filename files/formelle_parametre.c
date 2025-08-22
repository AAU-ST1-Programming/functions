#include <stdio.h>
/* function declaration */
int sum(int number1, int number2);
/* global variable declaration */
int a = 20;
/* main */
int main()
{
    /* local variable declaration in main function */
    int a = 10, b = 20, c;
    printf("value of a in main() = %d\n", a);
    c = sum(a, b);
    printf("value of c in main() = %d\n", c);
}
/* function to add two integers */
int sum(int number1, int number2)
{
    printf("value of number1 in sum() = %d\n", number1);
    printf("value of number2 in sum() = %d\n", number2);
    return number1 + number2;
}