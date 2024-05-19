#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main(void)
{
int n;
for(n = 1;n <= 10; n++)
printf("fib(%d) = %d \n",n, fib(n));

system("pause");
return 0;
}
int fib(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else
        return (fib(n-1) + fib(n-2));
}
