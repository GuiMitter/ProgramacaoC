#include <stdio.h>

void main(){

    int numeros[10] = {1,5,4,7,8,5,1,24,5,5};

    for (int i = 0; i < 10; i++)
    {
        printf("numero original: %d\n",numeros[i]);
         numeros[i] = numeros[i]+numeros[i+1];
         printf("numero: %d\n",numeros[i]);

    }
    
    int index;

    char * nomesAlunos[3][3]={
        {"Aluno 0","20","50"},
        {"Aluno 1","25","55"},
        {"Aluno 2","30","60"}

    };
    scanf("%d",&index);
    printf("As notas do %s são %s, %s ... \n", nomesAlunos[index][0],nomesAlunos[index][1],nomesAlunos[index][2]);
    



}