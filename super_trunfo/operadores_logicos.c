#include <stdio.h>

int main(){

    int a = 0, b = 5;
    int idade = 20;
    float altura = 1.69;
    if (a > 0 && b > 0)
    {
     printf("os números são positivos\n");
    }else{

        printf("Pelo menos um dos números são negativos\n");
    }

    
    if (a > 0 || b > 0)
    {
     printf("pelo menos um dos números são positivos\n");
    }else{

        printf("os dois numeros são negativos \n");
    }

    if (!(a>0) )
    {
     printf("a variavel a é negativa\n");
    }else{

        printf("A variavel a é positiva\n");
    }


    if (idade>=18&&idade<=30 &&altura>1.70){

    printf( "Você está na faixa etária e tem a altura adequada\n");

    }else{
        printf("você não atende aos critérios\n");
    }
    
}