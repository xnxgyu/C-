#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) 
{

int num1 = 12400;
double num2 = 5.234;

printf ("num1 的平方為 %1d\n",(long)pow(num1, 2));
printf ("num2 的平方為 %f",pow(num2, 2));

system ("pause");
return 0;
}
