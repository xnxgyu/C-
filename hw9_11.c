#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 3

int main(void)
{
    int i, j;
    int A[ROW][COL] = {{3, 41, 68}, {34, 51, 77}, {53, 32, 32}, {44, 24, 53}};
    int B[ROW][COL] = {{5, 32, 32}, {22, 44, 56}, {37, 33, 77}, {37, 88, 36}};
    
    printf("Matrix A + B =\n");
    
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
            printf("%4d",A[i][j] + B[i][j]);
        printf("\n");
    }
    
    system("pause");
    return 0;
    
}
