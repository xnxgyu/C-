#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
int n, i;

do
{
printf("輸入一正整數:");
scanf("%d",&n);
}
while(n <= 0);

printf("%d 的因數有: \n", n);

for(i = 1; i <= n; i++)
if(n % i == 0)
printf("%d  ",i);

printf("\n");

system("pause");
return 0;

}
