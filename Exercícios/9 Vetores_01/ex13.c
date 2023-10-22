/*
    Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.
*/
#include <stdio.h>

int main()
{

    int vetor[5], maior, menor, posicao_maior, posicao_menor = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Inserir os valores: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 5; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
            posicao_maior = i;
        }
        if(vetor[i] < menor)
        {
            menor = vetor[i];
            posicao_menor = i;
        }
    }

    printf("\nMaior: %d - Posicao: %d \nMenor: %d - Posicao: %d", maior, posicao_maior,  menor, posicao_menor);

    return 0;
}