#include <stdio.h>
#include <stdlib.h>
#define SQUARE(x) (x) * (x)
int main(void)
{
    int n;
    printf("輸入數值");
    scanf("%d",&n);
    
    printf("%d * %d = %d \n",n+1, n+1, SQUARE(n+1));
    
    system("pause");
    return 0;
}
