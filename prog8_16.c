#include <stdio.h>
#include <stdlib.h>
void func(void);
int a = 50;

int main(void)
{
    int a = 100;
    printf("呼叫 func() 之前,a = %d \n",a);
    func();
    printf("呼叫 func() 之後,a = %d \n",a);
    
    system("pause");
    return 0;
}

void func(void)
{
    a = a + 300;
    printf("於func()函數裡,a = %d \n",a);
}
