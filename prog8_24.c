#include <stdio.h>
#include <stdlib.h>
#define SQUARE(n) n * n
int main(void)
{
    double n;
    printf("輸入數值");
    scanf("%lf",&n);
    
    printf("%2lf * %2lf = %2lf \n", n, n, SQUARE(n));
    
    system("pause");
    return 0;
}
