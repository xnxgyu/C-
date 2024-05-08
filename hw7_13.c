#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int n, i = 2, sum = 0;

printf("輸入一個正偶數:");
scanf("%d",&n);

while(n % 2 != 0 || n <= 0)
{
printf("輸入一個正偶數:");
scanf("%d",&n);
}

while(i <= n)
{
sum += i;
i += 2;
}

printf("所有偶數到 n 的總和為 %d\n", sum);

system("pause");
return 0;

}
