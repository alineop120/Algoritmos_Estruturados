// Função para trocar o valor da variavel
#include <stdio.h>

void mudaValor(int *num)
{
    *num = 30;
}

int main () 
{
    int numero;

    mudaValor(&numero);

    printf("Valor da variavel numero: %d", numero);

    return 0;
}