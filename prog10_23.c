#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[3][4]={{12,53,24,73},{32,56,74,23},{32,56,23,21}};
    
    int m,n;
    
    for(m=0;m<3;m++)
        for(n=0;n<4;n++)
            printf("num[%d] [%d] = %d, 位址 = %p\n",m,n,*(*(num+m)+n),*(num+m)+n);
    printf("**num=%d\n",**num);
    
    system("pause");
    return 0;
    
}
