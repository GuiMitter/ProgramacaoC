#include <stdio.h>

int main(){

    //implicito

    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'A' é convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);

    //explicito

    int c = 10;
    int d = 3;
    float quociente = (float) c/d; // 'c' e 'd' são explicitamente convertidos em floar

    printf("Resultado: %.2f\n", quociente);

    return 0;
}