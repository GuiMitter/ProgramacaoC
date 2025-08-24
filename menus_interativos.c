#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu de Opções\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver Regras\n");
    printf("3 - Sair\n");

    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;

        printf("Digite um número de 0 a 9; \n");
        scanf(" d%", &palpite);

        if (numeroSecreto == palpite)
        {
            printf("Você acertou\n");
        }
        else
        {
            printf("você errou");
        }
        break;

    default:
        printf("Opção inválida. Saindo...\n");
        break;
    }
    return 0;
}
