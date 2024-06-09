#include <stdio.h>
#include <stdlib.h>

void address(float *);

int main(void)
{
    float pi = 3.14f;
    float *ptr = &pi;
    
    address(&pi);
    address(ptr);
    
    return 0;
    
}

void address(float *p1)
{
    printf("於位址 %p 內，儲存的變數內容為 %.2f\n",p1,*p1);
}
