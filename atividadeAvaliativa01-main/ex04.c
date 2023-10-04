/*
    Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)
*/
#include <stdio.h>

int main() {
//  Varíaveis    
    double lado_A, lado_B, lado_C;
    double a_triangulo;
    double b_triangulo;
    double c_triangulo;

//  Entrada de Dados - Lados A, B e C do triângulo
    printf("Informe os valores dos lados A do triângulo: ");
    scanf("%lf", &lado_A);
    printf("Informe os valores dos lados A, B e C do triângulo: ");
    scanf("%lf", &lado_B);
    printf("Informe os valores dos lados A, B e C do triângulo: ");
    scanf("%lf", &lado_C);

 // Processamento de Dados - Verificando se os lados de um triângulo formam válido
    if (lado_A + lado_B > lado_C && lado_A + lado_C > lado_B && lado_B + lado_C > lado_A) {
        double a_triangulo = lado_A * lado_A;
        double b_triangulo = lado_B * lado_B;
        double c_triangulo = lado_C * lado_C;

//  Processamento de Dados - Verificando os ângulos - usando o Teorema de Pitágoras
        if (a_triangulo + b_triangulo == c_triangulo) {
            printf("E um triangulo retangulo.\n");                  // ângulo de 90 graus
        } else if (a_triangulo + b_triangulo < c_triangulo) {
            printf("E um triangulo obtusangulo.\n");                // ângulo maior que 90 graus
        } else {
            printf("E um triangulo acutangulo.\n");                 // ângulo menor que 90 graus
        }
    } else {
        printf("Os valores informados nao formam um triangulo valido.\n");
    }

    return 0;
}
