#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int input;
  int cnt = 0;
  int password = 6917;

while(1)
{
printf("請輸入密碼: ");
scanf("%d",&input);

cnt++;

if(input == password)
{
printf("密碼輸入正確，歡迎使用本系統！\n");
break;
}

if(cnt == 3)
{
printf("密碼輸錯超過三次");
break;
}

}
system("pause");
return 0;

}






