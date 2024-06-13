#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct data
    {
        int num;
        char ch;
        double dist;
    }
    aaa;
    
    printf("aaa 占了 %d 個位元組\n",sizeof(aaa));
    
    return 0;
    
}
