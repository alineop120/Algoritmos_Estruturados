#include <stdio.h>

/*
Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.
*/

int main () {
//  Variáveis
    int num;
    int cont = 1;

//  Estrutura - Múltiplos de 3
    while (cont <= 5) {
        num = cont * 3;
        printf("\n%d", num);
        cont++;
    }

    return 0;
}
