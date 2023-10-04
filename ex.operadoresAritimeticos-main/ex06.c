#include <stdio.h>
#include <math.h>

/* Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. */

int main () {

    //Declaração das Variáveis
    double raio, area, PI = 3.1415;

    printf("digite o valor do raio: ");
    scanf("%lf", &raio);

    //Cálculo da área do círculo -> pi = * (raio * raio)
    area = PI * (pow(raio,2));

    //Saída de dados
    printf("A area do circulo e %lf.", area);

    return 0;
}
