/*
    Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições pares os valores do primeiro e nas posições ímpares os valores do segundo.
*/
#include <stdio.h>

int main() {
    int a[5], b[5], c[10];

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

    // Processamento de Dados
    for (int i = 0; i < 5; i++) {
        // Posições pares recebem os valores do vetor A
        c[2 * i] = a[i];

        // Posições ímpares recebem os valores do vetor B
        c[2 * i + 1] = b[i];
    }

    // Exibição do vetor C
    printf("\nVetor C (posições pares de A, posições ímpares de B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d -> %d\n", i, c[i]);
    }

    return 0;
}
