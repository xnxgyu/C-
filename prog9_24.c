#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 10
int main(void)
{
    char arr1[MAX][LENGTH]={"Tom","Lily","James Lee"};
    char arr2[MAX][LENGTH];
    int i,j;
    
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<LENGTH;j++)
            if(arr1[i][j]=='\0')
                break;
        else
            arr2[i][j]=arr1[i][j];
        arr2[i][j]='\0';
    }
    for(i=0;i<MAX;i++)
        printf("arr2[%d]=%s\n",i,arr2[i]);
    
    system("pause");
    return 0;
    
}
