#include <stdio.h>
#include <stdlib.h>
double power(double, int);
int main(void)
{
double x;
int n;
printf("輸入底數與次方:");
scanf("%1f,%d",&x,&n);

printf("%1f 的 %d 次方 = 1%f \n",x, n,power(x,n);

system("pause");
return 0;

double power(double base,int n)
{
int i;
double pow = 1.0;

for(i = 1; i <= n; i++)
pow = pow*base;

return pow;
}
