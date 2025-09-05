#include <stdio.h>

int main()
{

    int i = 0, numero = 0;

    while (i <= 10)
    {

        if (i % 2 == 0)
        {
            printf("o número %d é par!\n", i);
        }

        i++;
    }
    while (i <= 100)
    {

        if (i % 10 == 0)
        {
            printf("o número %d é dezena!\n", i);
        }

        i++;
    }

    do
    {
        printf("digite número par para sair do programa\n");
       // scanf(" %d", &numero);

        if (numero % 2 == 0)
        {
            printf("vc digitou numero par\n");
        }
        else
        {
            printf("vc digitou numero impar\n");
        }

    } while (numero % 2 != 0);

    printf("você digitou par\n\n\n\n\n1");

    for(int i = 0; i<=10;i++){
        printf("****Tabuada do %d****\n",i);
        for(int j = 0;j<=10;j++){
            int resultado = i * j;
            printf("%d X %d = %d\n",i,j,resultado);
        }
    }
    return 0;
}