#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void square(int *arr);

int main(void)
{
    int num[SIZE] = {1, 2, 3, 4, 5};
    int i;
    
    printf("num []= {1, 2, 3, 4, 5}\n");
    square(num);
    printf("square(num) = {");
    
    for(i=0;i<SIZE;i++)
        if(i != SIZE -1)
            printf("%d, ",num[i]);
        else
            printf("%d}\n",num[i]);
                   
    return 0;
}

void square(int *arr)
{
     int i;
    
    for(i=0;i<SIZE;i++)
        arr[i] *= arr[i];
}
