#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    struct data
    {
        char name[10];
        int math;
    }
    student[10];
    
    printf("sizeof(student[3])=%d\n",sizeof(student[3]));
    printf("sizeof(student)=%d\n",sizeof(student));
    
    return 0;
}
