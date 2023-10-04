#include <stdio.h>
#include <math.h>

/*
Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.
*/

int main () {
//  Variaveis
    float num, resultado;

//  Entrada de Dados
    printf("Informe o numero: ");
    scanf("%f", &num);

//  Processando Dados
//     Raiz
    if (num > 0) {
        resultado = sqrt(num);
        printf("Raiz: %.2f", resultado);

//  Quadrado
    } else {
        resultado = pow (num, 2);
        printf("Quadrado: %.2f", resultado);
    }

    return 0;
}
