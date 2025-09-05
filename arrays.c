#include <stdio.h>

void main(){

    int numeros[10] = {1,5,4,7,8,5,1,24,5,5};

    for (int i = 0; i < 10; i++)
    {
        printf("numero original: %d\n",numeros[i]);
         numeros[i] = numeros[i]+numeros[i+1];
         printf("numero: %d\n",numeros[i]);

    }
    
    



}