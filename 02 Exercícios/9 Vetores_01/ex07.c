/*
    Escreva um programa que leia 1 O números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.
*/
#include <stdio.h>

int main()
{

    int vetor[10], maior, posicao;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]); 
    }

    maior = vetor[0];

    for(int i = 0; i < 10; i++)
    {
        printf("\n%d", vetor[i]);

        if(vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("\n\nMaior valor: %d e posicao: %d", maior, posicao);

    return 0;
}