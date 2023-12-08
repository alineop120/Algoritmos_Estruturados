/*
    Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que são primos e suas respectivas posições no vetor.
*/
#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, k, primo;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; ++i) {
        scanf("%d", &vetor[i]);
    }

    printf("Os números primos no vetor são:\n");
    for (i = 0; i < 10; ++i) {
        primo = 1;
        for (j = 2; j < vetor[i]; ++j) {
            if (vetor[i] % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo == 1) {
            printf("%d na posição %d\n", vetor[i], i);
        }
    }

    return 0;
}
