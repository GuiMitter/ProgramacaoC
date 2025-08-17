#include <stdio.h>

int main()
{
    int idade = 2;
    int nota = 11111110;

    if (idade >= 60)
    {
        printf("você é um idoso!");
    }
    else if (idade < 60 && idade >= 18)
    {
        printf("você é um Adulto!");
    }
    else if (idade < 18 && idade >= 12)
    {
        printf("você é um adolecente!");
    }
    else
    {
        printf("Você é uma criança");
    }

    if (nota >= 90)
    {
        printf("Conceito é A!");
    }
    else if (nota >= 80)
    {
        printf("Conceito é B!");
    }
    else if (nota >= 70)
    {
        printf("Conceito é C!");
    }
    else if (nota >= 60)
    {
        printf("Conceito é D!");
    }
    else
    {
        printf("o conceito é E!");
    }
}