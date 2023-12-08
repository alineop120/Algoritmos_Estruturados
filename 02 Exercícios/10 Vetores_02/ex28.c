/*
    Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores vl e v2. Copie os valores ímpares de r para rl, e os valores pares de v para v2. Note que cada
um dos vetores v 1 e v2 têm no máximo 10 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos UTILIZADOS de vl e v2.
*/
#include <stdio.h>

int main () {
    // Declaração dos vetores
    int v[10], vl[10], v2[10];
    int i, j = 0, k = 0;

    // Leitura dos 10 números inteiros
    for (i = 0; i < 10; i++) {
        printf("Digite o %d número inteiro: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Separação dos valores pares e ímpares
    for (i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v2[j] = v[i];
            j++;
        } else {
            vl[k] = v[i];
            k++;
        }
    }

    // Impressão dos elementos UTILIZADOS de vl e v2
    printf("Elementos UTILIZADOS de vl: ");
    for (i = 0; i < k; i++) {
        printf("%d ", vl[i]);
    }


    printf("Elementos UTILIZADOS de v2: ");
    for (i = 0; i < j; i++) {
        printf("%d ", v2[i]);
    }

    return 0;
}
