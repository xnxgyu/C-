#include <stdio.h>
#include <stdlib.h>

int main (void) {
int n, i = 1, fact = 1;

do {
printf("請輸入n值 (n>0) : ");
scanf("%d", &n);
} while (n < 0);

do {
fact *= i;
i++;
}while (i <= n);

printf("%d ! = %d\n",n, fact);
system("pause");
return 0;
 }


註解
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i = 1, fact = 1; // 宣告變數 n、i、fact，並初始化 i 為 1，fact 為 1

    // 使用 do-while 迴圈確保 n 的值大於等於 0
    do {
        printf("請輸入n值 (n>0) : "); // 提示用戶輸入 n 的值
        scanf("%d", &n); // 接收用戶輸入的 n
    } while (n < 0); // 當 n 小於 0 時，繼續迴圈

    // 使用 do-while 迴圈計算 n 的階乘
    do {
        fact *= i; // 將 i 乘到 fact 中
        i++; // 將 i 自增
    } while (i <= n); // 當 i 小於等於 n 時，繼續迴圈

    // 輸出計算結果
    printf("%d ! = %d\n", n, fact);

    system("pause"); // 暫停程式執行，通常在 Windows 中用來暫停輸出
    return 0; // 返回 0 表示程式執行成功
}
