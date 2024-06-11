#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    struct data
    {
        char name[10];
        int math;
    }
    student;
    printf("sizeof(student)=%d\n",sizeof(student));
    
    return 0;
    
    }
