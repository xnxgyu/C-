#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
void func(int arr[]);
int main(void)
{
    int i,A[SIZE] = {20,8,13};
    
    printf("在main()裡 陣列a元素的位址為 \n");
    for(i = 0; i < SIZE; i++)
        printf("A[%d] = %2d, 位址為 %p \n",i, A[i],&A[i]);
    func(A);
    
    system("pause");
    return 0;
    
}

void func(int arr[])
{
    int i;
    printf("\n 在 func() 裡，陣列 arr 元素的位址為 \n");
    for(i = 0; i < SIZE; i++)
        printf("arr[%d] = %2d, 位址為 %p \n",i,arr[i],&arr[i]);
    
}
