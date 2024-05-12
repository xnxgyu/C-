#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
 int n, sum = 0, i = 1;

do
{
  printf("輸入一個奇數：");
  scanf("%d",&n);
}
while(n % 2 == 0 || n < 1);

for(i= 1; i <= n; i += 2)
  sum += i;
printf("從 1 到 %d 間的奇數總和為 %d\n", n, sum);

  system("pause");
  return 0;
}
