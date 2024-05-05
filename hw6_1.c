#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
char ch;

printf("請輸入一個字元:");
ch = getchar();

if(ch >= 48 && ch <=57)
printf("\n此字元是數字。\n");

if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
printf("\n此字元是英文字母。\n");

system("pause");
return 0;

}
