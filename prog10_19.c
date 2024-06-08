#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char name[20];
    char *ptr="How are you?";
    printf("what's your name?");
    gets(name);
    printf("Hi, %s  ",name);
    puts(ptr);
    
    system("pause");
    return 0;
    
}
