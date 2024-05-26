#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main(void)
{
    int score[MAX];
    int i = 0,num;
    float sum = 0.0f;
    
    printf("請輸入成績，要結束請輸入0: \n");
    do
    {
        if(i == MAX)
        {
            printf("陣列空間已使用完畢\n");
            i++;
            break;
        }
        printf("請輸入成績: \n");
        scanf("%d",&score[i]);
    }
    while(score[i++] > 0);
    num = i - 1;
    for(i = 0; i < num; i++)
        sum += score[i];
    printf("平均成績為: %.2f \n",sum / num);
    
    system("pause");
    return 0;
        
}
