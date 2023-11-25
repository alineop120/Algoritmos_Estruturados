/*
    Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar entre eles. Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e o produto escalar, sendo que o produto escalar é dado por: x1 * 111 + x2 * m + ... + x,. * y,,..
*/
#include <stdio.h>

int main() {
    // Tamanho dos vetores
    int tamanho = 5;

    // Vetores de entrada X e Y
    double vetorX[tamanho];
    double vetorY[tamanho];

    // Leitura dos elementos do vetor X
    printf("Digite os elementos do vetor X (números reais):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("X[%d]: ", i);
        scanf("%lf", &vetorX[i]);
    }

    // Leitura dos elementos do vetor Y
    printf("Digite os elementos do vetor Y (números reais):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Y[%d]: ", i);
        scanf("%lf", &vetorY[i]);
    }

    // Cálculo do produto escalar
    double produtoEscalar = 0.0;
    for (int i = 0; i < tamanho; i++) {
        produtoEscalar += vetorX[i] * (111 + i); // m = 111 + i
    }

    // Exibição dos conjuntos e do produto escalar
    printf("\nConjunto X:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%lf ", vetorX[i]);
    }

    printf("\nConjunto Y:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%lf ", vetorY[i]);
    }

    printf("\n\nProduto Escalar: %lf\n", produtoEscalar);

    return 0;
}
