#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[4][2][3] = {{{24, 23, 23}, {24, 57, 21}}, {{5, 5, 2}, {42, 25, 21}}, {{-42, 24, -24}, {69, -177, 32}}, {{42, 11, 41,}, {9, 2, 2}}};
    int i, j, k, sum = 0;
    
    for(i=0; i<4; i++)
        for(j=0; j<2; j++)
            for(k=0; k<3; k++)
                sum += A[i][j][k];
    
    printf("Sum(A[4][2][3]) = %d\n", sum);
    
    system("pause");
    return 0;
}
