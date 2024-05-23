#include <stdio.h>
#include <stdlib.h>

int find(int);

int main(void)
{
    int i;
    
    for(i = 1; i<= 12; i++)
        printf("%2d : %5d \n", i, find(i));
    
    system("pause");
    return 0;
}

int find(int n)
{
    int cont = 0, i = 1;
    
    while(cont != n)
    {
        if(i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
            cont += 1;
        
        i++;
    }
    
    return i - 1;
    
}
