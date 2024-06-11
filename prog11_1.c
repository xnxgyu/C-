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
    
    printf("請輸入姓名: ");
    gets(student.name);
    printf("請輸入成績: ");
    scanf("%d",&student.math);
    
    printf("姓名:%s\n",student.name);
    printf("成績:%d\n",student.math);
    
    return 0;
    
}
