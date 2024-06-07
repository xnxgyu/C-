#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,a[5]={32,16,35,65,52};
    printf("a=%p\n",a);
    printf("&a=%p\n",&a);
    
    for(i=0;i<5;i++)
        printf("&a[%d]=%p\n",i,&a[i]);
    
    system("pause");
    return 0;
    
}
