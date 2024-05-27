#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void)
{
    int n;
    
    printf("輸入一個 n 計算 2 + 4 +... + 2 (n-1) + 2n 的值:");
    scanf("%d",&n);
    
    while(n <= 0)
    {
        printf("n 不能小於或等於0 請再輸入一次:");
        scanf("%d",&n);
    }
    
    printf("答案 : %d \n", sum2(n));
    
    system("pause");
    return 0;
    
}

int sum2(int n)
{
    if(n == 1)
        return 2;
    else
        return 2 * n + sum2(n - 1);
    
}
