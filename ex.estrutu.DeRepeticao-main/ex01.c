#include <stdio.h>

/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. 
*/

int main () {
//  Variáveis
    int num;
    int cont = 0;

//
    printf("Informe quantos numeros de 10 a 50: ");
    scanf("%d", &num);

//  Estrutura - Ordem Crescente
    while (cont <= num) {
        printf("\n%d", cont);
        cont++;
    }
    return 0;
}