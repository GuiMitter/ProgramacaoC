#include <stdio.h>

int main(){

    char produtoA[30] = "produto A", produtoB[30] = "produto b";
    unsigned int estoqueA = 1000, estoqueB = 2000;
    float valorA = 15.5, valorB = 20.45;
    unsigned int estoqueMinimoA = 500, estoqueMinimoB = 2500;

    double valorTotalA, valorTotalB;

    int resultadoA, resultadoB;

    printf("produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA );
    printf("produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);


    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("produto %s tem estoque mínimo %d\n", produtoB, resultadoB);




    printf("O valor total de A(R$ %.2f) é maior que o valor total de B(R$ %.2f); %d\n", estoqueA* valorA,estoqueB* valorB,(estoqueA*valorA)>(estoqueB*valorB));




    return 0;
}
