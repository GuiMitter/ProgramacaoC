#include <stdio.h>

int main()
{
    // ternario
    int idade = 5;

    idade >= 18 ? printf("Vc é maior de idade\n") : printf("Você é menor de idade\n");
    // if
    if (idade >= 18)
    {
        printf("Vc é maior de idade\n");
    }
    else
    {
        printf("Vc é menor de idade\n");
    }

    // ternario
    int temperatura = 32;
    int resultado;

    resultado = temperatura >= 30 ? 1 : 0;

    resultado = 1 ? printf("Hj está quente\n") : printf("hoje está frio\n");
    // if
    if (temperatura >= 30)
    {
        printf("Hj está quente\n");
    }
    else
    {
        printf("hoje está frio\n");
    }

    // ternario
    int num1 = 20, num2 = 20;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("o maior número é : %d", maior);

    // if
    if (num1 > num2)
    {
        maior = num1;
        printf("o maior número é : %d", maior);
    }
    else if (num1 < num2)
    {
        maior = num2;
        printf("o maior número é : %d", maior);
    }
    else
    {
        printf("Empate");
    }

    return 0;
}