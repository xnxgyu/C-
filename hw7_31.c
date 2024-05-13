#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int i;

printf("1 ~ 100 中能被 2 與 3 整除，但不能被 12 整除的數字有 :\n");

for(i = 1; i <= 100; i++)
{
  if(i % 2 != 0 || i % 3 != 0 || i % 12 == 0)
    continue;
  printf("%d ", i);
}

printf("\n");

system("pause");
return 0;

}
