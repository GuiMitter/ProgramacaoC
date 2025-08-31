#include <stdio.h>
#include <time.h>

int main()
{
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatótio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // numero entre 1 a 100;

    // inicio do jogo
    printf("Bem-Vindo ao jogo maior, menor ou igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número (entre 1 a 100)");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção MAIOR\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;

        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção MENOR\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção IGUAL\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;

    default:
        printf("Opção de Jogo invalida");
        break;
    }
    
    printf("o número do computador é: %d e o do Jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("Você venceu!\n");
    }
    else
    {
        printf("Você perdeu!\n");
    }

    return 0;
}