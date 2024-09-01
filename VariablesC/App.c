#include <stdio.h>

int main() 
{
    /*
    There are four main types of variables in C:

    1. int
    2. float
    3. double
    4. char
    */

    int x = 7;
    float y = 16.5;
    double z = 45.30;
    char charA = 'R';

    // We can print out the integer like this...
    printf("%d\n", x);

    // We can print out the float like this...
    printf("%f\n", y);

    // We can print out the double like this...
    printf("%f\n", z);

    // We can print out a char like this...
    printf("%c\n", charA);

    // We can also declare constants...

    const int newConst = 4;
    const float newConst2 = 16.5;
    const double newConst3 = 77.15;
    const char newConst4 = 'S';

    // Casting in C

    // Widening Conversion

    int x2 = 6;
    double x1 = (double) x2;

    // Narrowing Conversion

    int x3 = (int) x1;
}