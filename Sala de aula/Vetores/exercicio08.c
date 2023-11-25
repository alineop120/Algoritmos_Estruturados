#include <stdio.h>

int main () {

    int vetor[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o numero: ");
        sacnf("%d", &vetor[i]);        
    }
    for (int i = 5; i < 6; i--) {
        printf("\n%d", &vetor[i]);

    }

    return 0;
}