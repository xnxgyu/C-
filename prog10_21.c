#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int n=20, *p, **pp;
    p=&n;
    pp=&p;
    printf("n=%d\n n=%p\n *p=%d\n p=%p\n &p=%p\n",n,&n,*p,p,&p);
    printf("**pp=%d\n *pp=%p\n pp=%p\n &pp=%p\n",**pp,*pp,pp,&pp);
    
    system("pause");
    return 0;
}
