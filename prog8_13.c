#include <stdio.h>
#include <stdlib.h>
int fac(int);
int main(void)
{
    int ans;
    ans = fac(5);
    printf("fac(5) = %d \n",ans);
    
    system("pause");
    return 0;
}
int fac(int n)
{
int i,total = 1;
for(i = 1; i <= n; i++)
    total = total * i;
return total;
}
