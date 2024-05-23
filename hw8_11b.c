#include <stdio.h>
#include <stdlib.h>

int find(int);

int main(void)
{
    int n1 = 5, n2 = 7;
    
    printf("%d : %d \n",n1, find(n1));
    printf("%d : %d \n",n2, find(n2));
    
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
