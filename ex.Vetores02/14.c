/*
    Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela. 
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
//  Percorrer proximas posições para buscar valores iguais
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                igual = 1;
            }
            
        }
        if (igual == 1) {
            printf("\nPossuem valores iguais: %d", vetor[i]);
        }
    }

    return 0;
}