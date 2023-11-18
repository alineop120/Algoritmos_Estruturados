/*
    Ponteiros
        Variável que armazena o endereço de outra variável.
    Variável
        Armazena dados.
*/
#include <stdio.h>

int main () {
// Variável
    int numero;
    int *ponteiro;

// Entrada de Dados
    printf("O endereco da variavel 'numero': %d", &numero);

    return 0;
}