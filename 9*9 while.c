#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int i = 1;
int j;
while (i <= 9)
{
j = 1;
while (j <= 9)
{
printf("%d x %d = %2d\n", i,j, i*j);
j++;
}
printf("\n");
i++;
}
system("pause");
return 0;
}
