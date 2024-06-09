#include <stdio.h>
#include <stdlib.h>

void count(int *);

int main(void)
{
    int num = 0;
    int i;
    
    for(i=1;i<=5;i++)
    {
        count(&num);
        printf("呼叫 count %d 次，num = %d\n",i,num);
    }
    
    return 0;
    
}

void count(int*i)
{
    *i += 1;
}
