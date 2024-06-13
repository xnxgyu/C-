#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char key;
    enum color
    {
        red=114,
        green=103,
        blue=98
    }
    shirt;
    
    do
    {
        printf("請輸入r,g或b ");
        scanf("%c",&key);
        fflush(stdin);
    }
    while((key!=red)&&(key!=green)&&(key!=blue));
    
    shirt = key;
    
    switch(shirt)
    {
        case red:
        printf("您選擇了紅色\n");
        break;
        
        case green:
        printf("您選擇了綠色\n");
        break;
        
        case blue:
        printf("您選了藍色\n");
        break;
    }
    return 0;
}
