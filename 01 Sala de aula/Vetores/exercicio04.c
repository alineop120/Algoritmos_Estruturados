/*
    Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/
#include <stdio.h>

int main () {
    int vetor[8];
    int x, y, soma;

    for (int i = 0; i < 8; i++) {
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]);
    }

    do {
        printf("Digite os valores para X e Y (entre 0 e 7): ");
        scanf("%d %d", &x, &y);

        if ((x >= 0 && x < 8) && (y >= 0 && y < 8)) {
            
            for (int i = 0; i < 8; i++) {
                
                if (i == x) {
                    soma = vetor[i] + vetor[i];
                }
                if (y == i) {
                    soma = vetor[i] + vetor[i];
                }
            }
            
        } else {
            printf("valores de X e Y invalidos.");
        }
    } while ((x < 0 || x > 7) && (y < 0 || y > 7));
    
    printf("Soma dos valores das posicoes %d e %d = %d", x, y, soma);

    return 0;
}