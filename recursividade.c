#include <stdio.h>
//ecursivo, codigo que chama a si mesmo

void recursivo(int numero){
    if (numero >0 ){
        printf("%d \n", numero);

        recursivo(numero - 1);
    }
}


int main()
{
    int tamanho = 10;
    printf("Contagem Regressiva...\n");
    recursivo(tamanho);

    return 0;
}