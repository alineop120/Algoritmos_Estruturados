/*
    Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula:
        V = pi * raio^2 * altura
    em que π = 3.1414592
*/
#include <stdio.h>
#include <math.h>

float cilindro(float diametro, float altura)
{
    float pi = 3.14;
    float raio = diametro / 2;
    
    return pi *  pow(raio, 2) * altura;
}

int main()
{
// Variáveis
    float diametro_cilindro, altura_cilindro, volume;

// Entrada de Dados
    printf("Informe o diametro: ");
    scanf("%f", &diametro_cilindro);
    printf("Informe o altura: ");
    scanf("%f", &altura_cilindro);

// Processamento de Dados
    volume = cilindro(diametro_cilindro, altura_cilindro);

// Saída de Dados
    printf("O volume do cilindro circular e %.2f", volume);
    
    return 0;
}