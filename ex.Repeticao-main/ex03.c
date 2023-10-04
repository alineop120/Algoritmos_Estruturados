/*
    Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. 
*/
#include <stdio.h>

int main() {
    int n;

    // Solicita ao usuário que insira o valor de n
    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    int termo_anterior = 0;
    int termo_atual = 1;
    int resultado;

    // Verifica se n é menor que 0
    if (n < 0) {
        printf("O número deve ser maior ou igual a zero.\n");
    } else if (n == 0) {
        resultado = termo_anterior;
    } else if (n == 1) {
        resultado = termo_atual;
    } else {
        for (int i = 2; i <= n; i++) {
            resultado = termo_anterior + termo_atual;
            termo_anterior = termo_atual;
            termo_atual = resultado;
        }
    }

    printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}
