#include <stdio.h>
#include <stdlib.h>

int length(char *ptr2);

int main(void)
{
    int i,total = 0;
    char *ptr[3] = {"Tom","Lily","James Lee"};
    
    for(i=0;i<3;i++)
    {
        puts(ptr[i]);
        total += length(ptr[i]);
    }
    
    printf("共佔 %d 個位元組\n",total * sizeof(char));
    
    return 0;
    
}

int length(char *ptr2)
{
    int i;
    
    for(i=0; *(ptr2+i) != '\0';i++);
    return i + 1;
}
