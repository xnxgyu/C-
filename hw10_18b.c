#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *ptr = "We are bestfriends.";
    int i, cont = 0;
    
    for(i=0; *(ptr + i) != '\0'; i++)
    if(*(ptr + i) >= 97 && *(ptr + i) <= 122)
        cont += 1;
    printf("Number of lowercases int *ptr is %d\n",cont);
    
    return 0;
}
