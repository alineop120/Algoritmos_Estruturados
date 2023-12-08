/*
    Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que não são múltiplos de 7 ou que terminam com 7.
*/
#include <stdio.h>

int main() {
    int vetor[100];
    int i, j = 0;

    for (i = 1; j < 100; i++) {
        if (i % 7 != 0 && i % 10 != 7) {
            vetor[j] = i;
            j++;
        }
    }

    printf("O vetor é: ");
    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
