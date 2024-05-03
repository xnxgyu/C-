#include <stdio.h>
#include <stdlib.h>
int main(void){
int n, i = 1, sum = 0;
do 
{
printf("請輸入n值 (n>0) : ");
scanf ("%d",&n);
}
while (n <= 0);

do
sum += i++;
while (i <= n);
printf("1+2...+%d = %d\n",n,sum);

system ("pause");
return 0;
}


註解
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i = 1, sum = 0; // 宣告變數 n、i、sum，並初始化 i 為 1，sum 為 0

    // 使用 do-while 迴圈確保 n 的值大於 0
    do {
        printf("請輸入n值 (n>0) : "); // 輸出提示訊息，要求用戶輸入 n
        scanf("%d", &n); // 接收用戶輸入的 n
    } while (n <= 0); // 當 n 不大於 0 時，繼續迴圈

    // 使用 do-while 迴圈計算 1 到 n 的總和
    do {
        sum += i++; // 將 i 加到 sum 中，然後將 i 自增
    } while (i <= n); // 當 i 小於等於 n 時，繼續迴圈

    // 輸出計算結果
    printf("1+2...+%d = %d\n", n, sum);

    system("pause"); // 暫停程式執行，通常在 Windows 中用來暫停輸出
    return 0; // 返回 0 表示程式執行成功
}

