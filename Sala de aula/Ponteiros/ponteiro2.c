#include <stdio.h>

int main () 
{
    int numero = 20;
    int *ponteiro;

    ponteiro = &numero;

    printf("O endereco de memoria do numero (atraves do ponteiro): %d", *ponteiro);
    printf("\nO conteudo do numero: %d", numero);

    *ponteiro = 50;

    printf("\nO conteudo do numero: %d", &ponteiro);
    printf("\nO endereco do numero (atraves do ponteiro): %d", *ponteiro);

    return 0;
}
