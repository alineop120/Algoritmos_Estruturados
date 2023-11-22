/*
    Ler o conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componenetes deste vetor, armazenando o resultado em outro vetor. os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
*/
#include <stdio.h>

int main () {
//
    int a_vetor[10], b_vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite os numeros:");
        scanf("%d", &a_vetor[i]);

        b_vetor[i] = a_vetor[i] * a_vetor[i];
    }
    for (int i = 0; i < 10; i++) {
        printf("\nA[%d] = %d. B[%d] = %d", i, a_vetor[i], i, b_vetor[i]);
    }

    return 0;
}