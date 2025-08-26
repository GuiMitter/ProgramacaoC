#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opcaoJogador, opcaoComputador = rand() % 3 + 1;

    printf("Escolha com o que vai jogar\n");
    printf("1 - papel\n");
    printf("2 - pedra\n");
    printf("3 - tesoura\n");

    printf("Digite a opção desejada: ");
    scanf("%d", &opcaoJogador);

    switch (opcaoJogador)
    {
    case 1:

        printf("Jogador: Papel - ");
        break;
    case 2:

        printf("Jogador: Pedra - ");
        break;
    case 3:

        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Opção inválida. \n");
        break;
    }

    switch (opcaoComputador)
    {
    case 1:

        printf("Computador: Papel -  \n");
        break;
    case 2:

        printf("Computador: Pedra -  \n");
        break;
    case 3:

        printf("Computador: Tesoura -  \n");
        break;
    }

    if (opcaoComputador == opcaoJogador)
    {
        printf("Jogo Empatou");
    }
    else if ((opcaoJogador == 1) && (opcaoComputador == 2) ||
             (opcaoJogador == 2) && (opcaoComputador == 3) ||
             (opcaoJogador == 3) && (opcaoComputador == 1))
    {
        printf("Jogador Venceu");
    }
    else
    {
        printf("Jogador Perdeu");
    }

    return 0;
}
