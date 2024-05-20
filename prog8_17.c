#include <stdio.h>
#include <stdlib.h>
double pi = 3.14;
void peri(double);
void area(double);
int main(void)
{
    double r =1.0;
    printf("pi = %.2f\n",pi);
    printf("radius = %.2f \n",r);
    peri(r);
    area(r);
    
    system("pause");
    return 0;
}

void peri(double r)
{
    printf("圓周長 = %.2f \n",2 * pi * r);
}

void area(double r)
{
    printf("圓面積 = %2.f \n",pi * r * r);
}
