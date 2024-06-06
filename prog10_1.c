#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b=5;
    double c=3.14;
    
    printf("a=%4d, sizeof(a)=%d, 位址為%d\n",a,sizeof(a),&a);
    printf("b=%4d, sizeof(b)=%d, 位址為%d\n",a,sizeof(b),&b);
    printf("c=%4d, sizeof(c)=%d, 位址為%d\n",a,sizeof(c),&c);
    
    system("pause");
    return 0;
}
