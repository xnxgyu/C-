#include <stdio.h>
#include <stdlib.h>
void add10(int *);
int main(void)
{
    int a=5;
    
    printf("add10之前,a=%d\n",a);
    add10(&a);
    printf("add10之後,a=%d\n",a);
    
    system("pause");
    return 0;
}

void add10(int *p1)
{
    *p1=*p1+10;
}
