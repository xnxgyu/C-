#include <stdio.h>
#include <stdlib.h>

int rsum(int);

int main(void)
{
    int n;
    
    printf("輸入一個 n 計算 1 * 2 + 2 * 3+...+(n - 1) * n 的值:");
    scanf("%d",&n);
    
    while(n <= 1)
    {
        printf("n 不能小於或等於1 請再輸入一次:");
        scanf("%d",&n);
    }
    
    printf("答案 : %d \n", rsum(n));
    
    system("pause");
    return 0;
    
}

int rsum(int n)
{
    if(n == 2)
        return 2;
    else
        return (n - 1) * n + rsum(n - 1);
    
}
