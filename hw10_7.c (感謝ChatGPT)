#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 28, b = 16;
    int *ptr1, *ptr2;

    ptr1 = &b;
    ptr2 = NULL; // 初始化 ptr2 以避免未定义行为
    printf("ptr1 = &b\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\n", a, (void*)ptr1, *ptr1, (void*)ptr2);

    ptr2 = &a;
    printf("ptr2 = &a\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    *ptr1 = 4;
    printf("*ptr1 = 4\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    a = 16;
    printf("a = 16\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    *ptr2 = 12;
    printf("*ptr2 = 12\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    ptr2 = ptr1;
    printf("ptr2 = ptr1\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    *ptr1 = 19;
    printf("*ptr1 = 19\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    ptr1 = &a;
    printf("ptr1 = &a\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    a = 7;
    printf("a = 7\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    *ptr2 = *ptr1;
    printf("*ptr2 = *ptr1\ta = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    printf("a = %d\tb = %d\tptr1 = %p\t*ptr1 = %d\tptr2 = %p\t*ptr2 = %d\n", a, b, (void*)ptr1, *ptr1, (void*)ptr2, *ptr2);

    return 0;
}
