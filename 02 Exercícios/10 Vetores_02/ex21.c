/*
    Faça um programa que receba do usuário dois vetores, A e B, com 1 o números inteiros cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.
*/
#include <stdio.h>

int main()
{
// Variáveis e Vetores
    //int tamanho;
    int a[10], b[10], c[10];

// Entrada de dados
    // Leitura dos elementos do vetor A
    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Leitura dos elementos do vetor B
    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }

    // Cálculo do vetor C -> (C = A - B)
    for (int i = 1; i < 5; i++) {
        c[i] = a[i] - b[i];
    }

    // Exibição do vetor C
    for (int i = 0; i < 5; i++) {
        printf("%d = %d - %d\n", c[i], a[i], b[i]);
    }
    return 0;
}