/*
    Variável
        Armazena dados.
    Ponteiros
        Variável que armazena o endereço de outra variável.
    
    int *p -> declaração do ponteiro;
    p -> manipulação ou recuperação do conteúdo do ponteiro;
    *p -> manipulação ou recuperação do conteúdo da variável para qual o ponteiro aponta;
    &p -> reucperação do end de memoria do ponteiro.
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