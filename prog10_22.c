#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num [3][4];
    
    printf("num=%p\n",num);
    printf("&num=%p\n",&num);
    printf("*num=%p\n",*num);
    
    printf("num[0]=%p\n",num[0]);
    printf("num[1]=%p\n",num[1]);
    printf("num[2]=%p\n",num[2]);
    
    printf("&num[0]=%p\n",&num[0]);
    printf("&num[1]=%p\n",&num[1]);
    printf("&num[2]=%p\n",&num[2]);
    
    system("pause");
    return 0;
}
