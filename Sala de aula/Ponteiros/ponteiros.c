/*
    Ponteiros
        Variável que armazena o endereço de outra variável.
    Variável
        Armazena dados.
*/
#include <stdio.h>

int main () 
{
// Variável
    int numero;
    int *ponteiro;
    // Declaração de ponteiros:
    /*  
        float *p2;
        double *p3;
        struct pessoa *p;
    */

    // Atribuição de valores as variaveis
    numero = 10;
    ponteiro = &numero;

    printf("O endereco de memoria do numero: %p", &numero);
    printf("\nO endereco de memoria do ponteiro: %p", &ponteiro);

    // Visualizar o conteúdo
    printf("\nO conteudo do numero: %d", numero);
    printf("\nO conteudo do ponteiro: %p", ponteiro);   //Em hexadecimal


    return 0;
}