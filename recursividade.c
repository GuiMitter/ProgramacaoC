#include <stdio.h>
//ecursivo, codigo que chama a si mesmo

/* no caso de recursividade, a ordem do fatores afeta o resultado
no exemplo abaixo a contagem regressiva será impressa de 10 a 1. porque?
por que o processo de recursividade funciona em pilha ou seja, o primeiro resultado será o
ultimo a sair, ou seja, o ultimo resultado é o 10, então ele será o primeiro a ser impresso
pois está no topo da pilha, caso eu queira mudar isso, basta mudar a ordem
envez de fazer o print primeiro, e chamar a função depois, 
basta chamar a função primeiro e depois fazer o print





*/
void recursivo(int numero){
    if (numero >0 ){
        printf("%d \n", numero);

        recursivo(numero - 1);
    }
}
void recursivo1(int numero){
    if (numero >0 ){
         recursivo1(numero - 1);
        printf("%d \n", numero);

       
    }
}


int main()
{
    int tamanho = 10;
    printf("Contagem Regressiva...\n");
    recursivo(tamanho);
    printf("Contagem Regressiva...\n");
     recursivo1(tamanho - 1);
    return 0;
}