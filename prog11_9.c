#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int main(void)
{
    int i,m,index=0;
    struct data
    {
        char name[10];
        int math;
    }
    student[MAX]={{"Mary",39},{"Floda",59},{"Jenny",69}};
    
    m=student->math;
    for(i=1;i<MAX;i++)
    {
        if((student+i)->math > m)
        {
            m=(student+i)->math;
            index=i;
        }
    }
    printf("%s 的分數最高,",(student+index)->name);
    printf("分數為%d分\n",(student+index)->math);
    
    return 0;
}
