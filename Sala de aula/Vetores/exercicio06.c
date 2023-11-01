/*
    faça um programa qu receba do úsuario um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.
*/
#include <stdio.h>
#include <stdlib.h>

int main () {

    int vetor[10], maior, menor;

    for (int i = 0; i < 8; i++) {
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 8; i++) {
        if (vetor[1] > maior) {
            maior = vetor[1];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        } 
    }

    printf("o maior valor %d e o menor valor %d", maior, menor);

    return 0;
}
