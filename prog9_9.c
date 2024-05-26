#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, sale[2][4],sum = 0;
    
    for(i = 0; i < 2; i++)
        for(j = 0; j < 4; j++)
        {
            printf("業務員 %d 的第 %d 季業績:",i + 1, j + 1);
            scanf("%d",&sale[i][j]);
        }
    printf("***Output***");
    for(i = 0; i < 2;i++)
    {
        printf("\n業務員 %d 的業績分別為 ",i + 1);
        for(j = 0; j < 4; j++)
        {
            printf("%d  ",sale[i][j]);
            sum += sale[i][j];
        }
        
    }
    printf("\n 2004年總銷售量為 %d 部車 \n",sum);
    
    system("pause");
    return 0;
    
}
