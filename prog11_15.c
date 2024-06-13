#include <stdio.h>
#include <stdlib.h>
struct data
{
    char name[10];
    int math;
}
;
typedef struct data SCORE;
void display(SCORE);
int main(void)
{
SCORE s1={"Jenny",69};
    display(s1);
    
    return 0;
}
void display(SCORE st)
{
    printf("學生姓名: %s\n",st.name);
    printf("數學成績: %d\n",st.math);
}
