/*
    Leia um vetor de 10 posições e atribua valor O para todos os elementos que possuírem
valores negativos.
*/
#include <stdio.h>

int main() {
    // Variáveis
    float vetor[10];

    // Entrada de Dados
    for (int i = 0; i < 10; i++) {
        printf("Informe um numero: ");
        scanf("%f", &vetor[i]);
    }

    // Processamento de Dados
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    // Saída de Dados
    printf("Vetor modificado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }

    return 0;
}
