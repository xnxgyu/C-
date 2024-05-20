#include <stdio.h>
#include <stdlib.h>
#define SQUARE(x) x * x
int main(void)
{
    int n;
    printf("輸入數值");
    scanf("%d",&n);
    
    printf("%d * %d = %d \n",n, n, SQUARE(n));
    
    system("pause");
    return 0;
}
