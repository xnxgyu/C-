#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, age[3];
    for(i = 0; i < 3; i++)
    {
        printf("請輸入age[%d}的值: ",i);
        scanf("%d",&age[i]);
    }
    for(i = 0; i < 3; i++)
        printf("age[%d] = %d \n", i, age[i]);
    
    system("pause");
    return 0;
}
