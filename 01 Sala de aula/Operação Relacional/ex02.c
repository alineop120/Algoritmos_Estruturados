#include <stdio.h>
/*
Leia o sálario e imprima se ganha mais que o mínimo.
*/

int main () {
    //Variaveis
    float salario;

    //Entrada de Dados
    printf("Informe seu salario: ");
    scanf("%f", &salario);

    //Processamento e Saída de Dados
    if (salario > 1.320) {
        printf("Seu salario e mais que o salario minimo.");

    } else {
        printf("Seu salario e menor que o salario minimo.");
    }

    return 0;
}