#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
char ch;

printf("請輸入一個字元 a (A) 或 b (B):");
ch = getche();
putchar('\n');

switch(ch)
{
case 'a':
case 'A':
printf("您輸入的是A\n");
break;

case 'b':
case 'B':
printf("您輸入的是B\n");
break;

default:
printf("您輸入的不是 a 也不是b。\n");
}

system("pause");
return 0;

}


// ((bug))
