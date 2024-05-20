#include <stdio.h>
#include <stdlib.h>
void func(void);
int a;
int main(void)
{
    a = 100;
    printf("呼叫func() 之前,a = %d \n",a);
    func();
    printf("呼叫func() 之後,a = %d \n",a);
    
    system("pause");
    return 0;
}

void func(void)
{
    a = 300;
    printf("於 func() 函數裡,a = %d \n",a);
}
