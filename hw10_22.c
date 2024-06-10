#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[2][20] = {"Time is money","Have a good Time"};
    
    puts(*(str));
    puts(*(str + 1));
    
    return 0;
}
