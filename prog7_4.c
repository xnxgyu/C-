#include <stdio.h>
#include <stdlib.h>
int main(void){
int i = 1 ;
while (i > 0)
printf("i = %d \n",i++);
system("pause");
return 0;
}



註解
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 1; // 初始化 i 為 1

    while (i > 0) { // 進入 while 迴圈，條件是 i 大於 0
        printf("i = %d \n", i++); // 輸出 i 的值並將 i 自增
    }

    system("pause"); // 暫停程式執行（通常在 Windows 中用來暫停輸出）
    return 0; // 返回 0 表示程式執行成功
}
