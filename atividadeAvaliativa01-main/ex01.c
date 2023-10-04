/*
    Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). 

    f(x)  =   5x + 3
            ____________
        (raiz) x^2 - 16

*/
#include <stdio.h>
#include <math.h>

int main () {
    int x, func, raiz;
    double result;

    printf("Informe o valor de X: ");
    scanf("%d", &x);


    if (x >= 4) {
        func = 5 * x + 3;
        if (x * x >= 16) {
            raiz = sqrt(pow(x, 2) - 16);
            result = func / raiz;
            printf("Solução: %.2lf\n", result);
        } else {
            printf("Erro: O valor de X deve ser maior ou igual a 4 para calcular a raiz.\n");
        }
    } else {
        printf("Erro: O valor de X deve ser maior ou igual a 4 para calcular a função.\n");
    }
    return 0;
}