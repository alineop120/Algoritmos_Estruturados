/*
    Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. 
*/
#include <stdio.h>

int main() {
//  Variaveis
    double x, y;

//  Entrada de Dados
    printf("Digite as coordenadas do ponto (x): ");
    scanf("%lf", &x);
    printf("Digite as coordenadas do ponto (y): ");
    scanf("%lf", &y);

//  Processamento de Dados
    if (x == 0.0 && y == 0.0) {
        printf("Origem\n");
    } else if (x == 0.0) {
        printf("Eixo Y\n");
    } else if (y == 0.0) {
        printf("Eixo X\n");
    } else if (x > 0.0 && y > 0.0) {
        printf("Primeiro quadrante\n");
    } else if (x < 0.0 && y > 0.0) {
        printf("Segundo quadrante\n");
    } else if (x < 0.0 && y < 0.0) {
        printf("Terceiro quadrante\n");
    } else if (x > 0.0 && y < 0.0) {
        printf("Quarto quadrante\n");
    }

    return 0;
}
