#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5] = {34, 76, 33, 42, 76};
    int i ;
    
    printf("arr[5] = {");
    for(i=0;i<5;i++)
        if(i != 4)
            printf("%d, ", *(arr+i));
        else
            printf("%d\n", *(arr + i));
    
    printf("arr[5] + 10 ={");
    for(i=0;i<5;i++)
        if(i != 4)
            printf("%d, ", *(arr +i) + 10);
        else
            printf("%d}\n",*(arr + i) + 10);
    return 0;
    
    
}
