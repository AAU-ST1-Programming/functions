#include <stdio.h>
/* function declaration (jeg lover programmet at funktionen find_max er defineret et sted) */
double find_max(double num1, double num2);
int main()
{
    double a = 13.1, b = 17.1;
    double c;
    /* function call */
    c = find_max(a, b);

    printf("a=%f, b=%f, max(a,b)=%f", a, b, c);
    return 0;
}

/* function definition (Vi definerer programmet her)*/
double find_max(double num1, double num2)
{ 
    /* return the maximum of 2 values */
    return (num1>num2) ? num1 : num2;
}
