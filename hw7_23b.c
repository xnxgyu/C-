#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n = 1, sum = 0;

while(sum <= 1000)
sum += n++;

printf("n = %d\n",n - 1);

system("pause");
return 0;

}
