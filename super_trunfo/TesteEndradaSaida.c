#include <stdio.h>

int main(){
/*
    int idade = 20;
    char nome[20] = "Guilherme";
    float altura = 1.75;
    

    printf("A Altura do cidadão é: %.2f\n", altura);
    printf("O nome do cidadão é: %s\n", nome);
    printf("A idade do cidadão é: %d\n", idade);

*/
    int idade ;
    char nome[20];
    float altura;
    

    printf("Qual a Altura do cidadão?");
    scanf("%f", &altura);

    printf("Qual o nome do cidadão? ");
    scanf("%s", nome);

    printf("Qual a idade do cidadão?");
    scanf("%d", &idade);

    printf("A Altura do cidadão é: %.2f\n", altura);
    printf("O nome do cidadão é: %s\n", nome);
    printf("A idade do cidadão é: %d\n", idade);

}