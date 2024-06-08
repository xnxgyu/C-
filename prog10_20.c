#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i;
    char *ptr[3]={"Tom","Lilly","James Lee"};
    for(i=0;i<3;i++)
        puts(ptr[i]);
    
    system("pause");
    return 0;

}
