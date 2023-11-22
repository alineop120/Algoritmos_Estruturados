#include <stdio.h>

#define TAM 10

int main () {

    /*int numeros[5] = {1, 2, 4, 100};        // COM Inicialização

    printf("%d", numeros[0]);
    printf("\n%d", numeros[1]);
    printf("\n%d", numeros[2]);
    printf("\n%d", numeros[3]);

    printf("\n----------------------");

    int vetorNumeros[5];                    // SEM Inicialização

    vetorNumeros[0] = 222;

    printf("\n%d", vetorNumeros [0]);
    
    printf("\nInsira um valor na posicao 4: ");
    scanf("%d", &vetorNumeros[4]);
    printf("\n%d", vetorNumeros[4]);

    printf("\nInsira um valor na posicao 0: ");
    scanf("%d", &vetorNumeros[0]);
    printf("\n%d", vetorNumeros[0]);

    printf("\n----------------------");

    int vetor[TAM];                             //COM A ESTRUTURA DE REPETICAO - FOR

    for (int i=0; i < TAM; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 4; i++) {
        printf("\nDado na posicao %d: %d", i, vetor[i]);

    }*/

    printf("\n----------------------");

    char alunos[4][10] = {"Maria", "Joao", "Pedro"};                               //COM CARACTER

    printf("\n%s", alunos[0]);

    printf("\n----------------------");
    
    char alunos2[3];

    for (int i = 0; i < 3; i++) {
        printf("\nDigite o nome: ");
        fgets(alunos2[i], 20, stdin);
    }

    for (int i = 0; i < 3; i++) {
        printf("\nNomes: %s", alunos2[i]);
    }

    return 0;
}