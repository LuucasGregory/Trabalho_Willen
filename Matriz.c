#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[2][2] = {{1,2},{3,4}};
    int matriz2[2][2] = {{5,6},{7,8}};
    int matriz3[2][2];
    
    for(int i = 0; i < 2; i++){
    
        for(int j = 0; j < 2; j ++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d ", matriz3[i][j]);
        
        }
    
    }
}
