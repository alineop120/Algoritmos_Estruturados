#include <stdio.h>

/*
Leia o peso e imprima se é menor que 60kg.
*/

int main () {
    //Variaveis
    float peso;

    //Entrada de Dados
    printf("Informe seu peso: ");
    scanf("%f", &peso);

    //Processamento e Saída de Dados
    if (peso < 60) {
        printf("Seu peso e menor que 60kg.");

    } else {
        printf("Seu peso e maior que 60kg.");
    }



    return 0;
}