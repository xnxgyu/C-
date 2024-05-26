#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
int main(void)
{
    int i, num,flag = 0;
    int A[SIZE] = {33, 75, 69, 41, 33, 19};
    
    printf("陣列A元素的值為:");
    for(i = 0; i < SIZE;i++)
        printf("%d",A[i]);
    
    printf("\n 請輸入欲搜尋的整數:");
    scanf("%d",&num);
    
    for(i = 0; i < SIZE; i++)
        if(A[i] == num)
        {
            printf("找到了 A[%d] = %d \n",i,A[i]);
            flag = 1;
        }
    if(flag == 0)
        printf("沒有找到相同值 \n");
    
    system("pause");
    return 0;
}
