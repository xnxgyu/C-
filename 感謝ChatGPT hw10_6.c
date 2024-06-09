#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12, b = 7;
    int *ptr;
    
    ptr = &a;
    printf("ptr = &a\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    *ptr = 19;
    printf("*ptr = 19\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    ptr = &b;
    printf("ptr = &b\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    b = 16;
    printf("b = 16\t\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    *ptr = 12;
    printf("*ptr = 12\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    a = 17;
    printf("a = 17\t\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    ptr = &a;
    printf("ptr = &a\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    a = b;
    printf("a = b\t\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    *ptr = 63;
    printf("ptr = 63\t\ta = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    printf("a = %d\tb = %d\tptr = %p\t*ptr = %d\n", a, b, ptr, *ptr);
    
    return 0;
}
