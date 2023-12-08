/*
    Faça um programa que calcule o desvio padrão de um vetor 11 contendo 11 = 10 números, onde m é a media do vetor.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int i;
    float vetor[10];
    float media = 0.0, desvio_padrao = 0.0;

    printf("Digite os 10 números do vetor:\n");
    for (i = 0; i < 10; ++i) {
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }

    media /= 10;

    for (i = 0; i < 10; ++i) {
        desvio_padrao += pow(vetor[i] - media, 2);
    }

    desvio_padrao = sqrt(desvio_padrao / 10);

    printf("O desvio padrão do vetor é: %.2f\n", desvio_padrao);

    return 0;
}
