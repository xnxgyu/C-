#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int length(char *ptr);

int main(void)
{
    char usersay[SIZE];
    
    printf("Write somrething here: ");
    gets(usersay);
    
    printf("You entered %d characters here.\n", length(usersay));
    
    return 0;
}

int length(char *ptr)
{
    int i;
    
    for(i=0; *(ptr + i) != '\0'; i++);
        
        return i;
}
