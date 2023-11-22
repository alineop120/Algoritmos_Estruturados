/*
Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.
*/
#include <stdio.h>

int main () {

    int vetor[10], maior, posicao;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero: ");
        sacnf("%d", &vetor[i]);        
    }

    maior = vetor[0];

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d", vetor[i]);

        if (vetor[1] > maior) {
            maior = vetor[i];
            posicao =;
        }
    }

    return 0;
}