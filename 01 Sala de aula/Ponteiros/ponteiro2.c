#include <stdio.h>

int main () 
{
    int numero = 20;
    int *ponteiro = NULL;
    int *ponteiro2;

    printf("\nO conteudo do numero (antes das atribuicao): %p", ponteiro);

    ponteiro = &numero;
    ponteiro2 = &numero;

    printf("\nO endereco de memoria do numero (atraves do ponteiro): %d", *ponteiro);
    printf("\nO conteudo do numero: %d", numero);

    *ponteiro = 50;
    *ponteiro2 = 1000;

    printf("\nO conteudo do numero: %d", numero);
    printf("\nO endereco do numero (atraves do ponteiro): %d", *ponteiro);

    return 0;
}
