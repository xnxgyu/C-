#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *ptr = "We are bestfriends.";
    int i;
    
    for(i=0; *(ptr + i) != '\0'; i++);
    
    printf("Number of characters int *ptr is %d\n",i);
    
    return 0;
}
