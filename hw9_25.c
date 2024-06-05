#include <stdio.h>
#include <stdlib.h>
#define SIZE 25

void toLower(char str[]);

int main(void)
{
    char userstr[SIZE];
    
    printf("輸入: ");
    
    gets(userstr);
    toLower(userstr);
    
    printf("字串轉換為小寫字母: \n");
    printf("%s\n", userstr);
    
    system("pause");
    return 0;
    
}

void toLower(char str[])
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        i++;
        
    }
    
}


