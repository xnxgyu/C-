#include <stdio.h>
#include <stdlib.h>
const double pi = 3.14;
double area(double);
int main(void)
{
    printf("pi = %4.2f, area() = %6.2f \n",pi, area(2.0));

    system("pause");
    return 0;
}

double area(double r)
{
    return pi * r * r;
}
