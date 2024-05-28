#include <stdio.h>
#include <stdlib.h>
#define CUBIC(X) X * X * X

int main(void)
{
    int n1 = 5;
    double n2 = 2.4;
    
    printf("%d ^ 3 = % d \n %.11f ^ 3 = %lf \n", n1, CUBIC(n1), n2, CUBIC(n2));
    
    system("pause");
    return 0;
    
}
