#include <stdio.h>

/*
Codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. Se o número não for par, o programa não deve fazer nada.
*/

int main () {
    //Variaveis
    int num, par;

    //Informando o numero
    printf("Informe um numero: ");
    scanf("%d", &num);

    //Operando o numero e Mostrando resultado
    par = num % 2;

    if (par == 0) {
        printf("O numero e par.");
    }

    return 0;
}