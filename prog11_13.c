#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    enum color
    {
        red,
        green,
        blue
    }
    ;
    enum color shirt;
    
    printf("sizeof(shirt)=%d\n",sizeof(shirt));
    printf("red=%d\n",red);
    printf("green=%d\n",green);
    printf("blue=%d\n",blue);
    
    shirt=green;
    if(shirt==green)
        printf("你選擇了綠色的衣服\n");
    else
        printf("你選擇了非綠色的衣服\n");
    
    return 0;
    
}
