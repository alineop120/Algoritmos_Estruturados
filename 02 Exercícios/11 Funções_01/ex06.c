/*
    Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa:
        IMC = peso / (altura * altura)
*/
#include <stdio.h>
#include <math.h>

float imc(float peso_kg, float altura_m)
{
    return peso_kg / pow(altura_m,2);
}

int main()
{
    float peso, altura, resultado;

    printf("Informe o peso (quilos): ");
    scanf("%f", &peso);
    printf("Informe a altura (metros): ");
    scanf("%f", &altura);

    resultado = imc(peso, altura);

    printf("O IMC da pessoa e %.2f", resultado);

    return 0;
}