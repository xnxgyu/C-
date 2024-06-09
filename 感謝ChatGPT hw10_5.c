#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 5, b = 10;
    int *ptr1 = NULL, *ptr2 = NULL; // 初始化指標為 NULL
    
    printf("a = 5, b = 10\t\ta = %d\tb = %d\t\tptr1 = -\t\t\t*ptr1 = -\t\tptr2 = -\t\t\t*ptr2 = -\n", a, b);
    printf("*ptr1, *ptr2\t\ta = %d\tb = %d\t\tptr1 = %p\t*ptr1 = -\t\tptr2 = %p\t*ptr2 = -\n", a, b, ptr1, ptr2);
    
    ptr1 = &a;
    printf("ptr1 = &a\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = -\n", a, b, ptr1, *ptr1, ptr2);
    
    ptr2 = &b;
    printf("ptr2 = &b\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    *ptr1 = 7;
    printf("*ptr1 = 7\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    *ptr2 = 32;
    printf("ptr2 = 32\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    a = 17;
    printf("a = 17\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    ptr1 = ptr2;
    printf("ptr1 = ptr2\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    *ptr1 = 9;
    printf("*ptr1 = 9\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    ptr1 = &a;
    printf("ptr1 = &a\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    a = 64;
    printf("a = 64\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    *ptr2 = *ptr1 + 5;
    printf("*ptr2 = *ptr1 + 5\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    ptr2 = &a;
    printf("ptr2 = &a\t\ta = %d\tb = %d\t\tptr1 = %p\t\t*ptr1 = %d\t\tptr2 = %p\t*ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
    
    printf("a = %2d, b = %2d, *ptr1 = %2d, *ptr2 = %2d\n", a, b, *ptr1, *ptr2);
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    
    // system("pause"); // 在非 Windows 環境下移除這行
    return 0;
}
