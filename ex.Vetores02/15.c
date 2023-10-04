/*
    leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos repetidos.
*/
#include <stdio.h>

int main () {
//  Variaveis
    int vetor[10], igual;

//  Inserir informações no vetor
    for (int i = 0; i < 10; i++) {
        printf("Inserir valor: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        igual = 0;
        for (int j = i + 1; i < 10; j++) {
            if (vetor[i] == vetor[j]) {
                igual = 1;
            }
        }
        if (igual != 1) {
            printf("\nSomente valores distintos: %d", vetor[i]);
        }
        
    }
    
    return 0;
}