#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura\n");
    scanf("%f",&temperatura);
    printf("Entre com a umidade\n");
    scanf("%f",&umidade);
    printf("Entre com o estoque\n");
    scanf("%u",&estoque);

    if (temperatura>=30){
        printf("Temperatura está alta\n");

    }else
    {
        printf("temperatura está dentro dos paramentros\n");
    }

    if (umidade>=50){
        printf("Umidade está elevada\n");

    }else
    {
        printf("umidade está dentro dos paramentros\n");
    }

    if (estoque<=estoqueMinimo){
        printf("Estoque abaixo do minimo\n");

    }else
    {
        printf("estoque normal\n");
    }


    return 0;
}
