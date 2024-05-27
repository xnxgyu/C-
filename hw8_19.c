#include <stdio.h>
#include <stdlib.h>

double rpower(double,int);

int main(void)
{
    int n = 3;
    double b = 2.0;
    
    printf("%.11f 的 %d 次方 = %lf \n", b, n, rpower(b, n));
    
    system("pause");
    return 0;
    
}

double rpower(double b, int n)
{
    if(n == 0)
        return 1;
    else if(n > 0)
        return b * rpower(b, n -1);
    else
        return 1 / b * rpower(b, n + 1);
    
}
