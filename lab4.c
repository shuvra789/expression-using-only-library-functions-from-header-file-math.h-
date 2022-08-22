// Write a program to take input x and output the value of the following expression using only library functions from header file “math.h”
#include<stdio.h>
#include<math.h>

int main(void)
{
    double x, y;
    printf("Enter x> ");
    scanf("%lf", &x);
    y = 5 * pow(x, 4.0) + 3 * pow(x, 2.0) + sqrt(7.0) * tan(x) - exp(x) +
    ceil(fabs(x));
    printf("Value of the expression: %.2f\n", y);

    return 0;
}
