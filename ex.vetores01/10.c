/*

*/
#include <stdio.h>
#define TAM 2

int main () {
//
    float notas[TAM], soma, media;

    for (int i = 0; i < TAM; i++) {
        printf("Inserir as notas: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma/TAM;

    printf("Media Geral: %.2f", media);    
}