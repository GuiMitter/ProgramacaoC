#include <stdio.h>

int main(){
    int matricula, idade;
    float altura;
    char nome[50];

    printf("Prossiga para o cadastro do aluno! \n");

    printf("Qual o nome do Aluno: \n");
    fgets(nome,50,stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Qual a idade do Aluno? \n");
    scanf("%d",&idade);

    printf("Qual a altura? \n");
    scanf("%f",&altura);

    printf("Qual a matricula do Aluno? \n");
    scanf("%d",&matricula);

        printf("Nome do aluno: %s - matricula: %d \n", nome,matricula);
        printf("Idade %d - Altura: %.2f \n", idade, altura);

        return 0;

}