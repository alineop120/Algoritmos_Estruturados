/*
    Escreva uma função para o cálculo do volume de uma esfera:
        V = 4 * pi * raio^3 / 3
    Em que π = 3.1414592 e o valor do raio r deve ser passado por parâmetro.
*/
#include <stdio.h>
#include <math.h>

float esfera(float raio)
{
    float pi = 3.1414592;
// float raio = diametro / 2;
    
    return (4 * pi * pow(raio,3)) / 3;
}

int main()
{
// Variáveis
    float raio_esfera, volume;

// Entrada de Dados
    printf("Informe o raio: ");
    scanf("%f", &raio_esfera);

// Processamento de Dados
    volume = esfera(raio_esfera);

// Saída de Dados
    printf("O volume da esfera e %.2f", volume);
    
    return 0;
}