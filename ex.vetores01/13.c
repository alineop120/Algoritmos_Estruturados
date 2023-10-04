#include <stdio.h>

int main () {

    int vetor[5], maior, menor, p_maior, p_menor;

    for (int i = 0; i < 5; i++) {
        printf("Inserir os valores: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            p_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            p_menor = i;
        }
        
    }
    
    printf("Maior: %d. \nP - Maior: %d. \nMenor: %d. \nP - Menor: %d", maior, p_maior, menor, p_menor);
}