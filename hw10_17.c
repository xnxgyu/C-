#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5] = {74, 77, 42, 17, 64};
    int i, max, min;
    min = max = 0;
    
    for(i=0;i<5;i++)
    {
        if(*(A + i) > *(A + max))
            max = i;
        if(*(A + i) < *(A + max))
            min = i;
    }
    
    printf("The index of maximum value in array A is %d\n",max);
    printf("The index of minimum value in array A is %d\n",min);
    
    return 0;
    
}
