#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE] = {2, 3, 1, 7, 9};
    
    printf("arr[] 共佔了 %d 個位元組 \n", sizeof(arr));
    
    system("pause");
    return 0;
}
