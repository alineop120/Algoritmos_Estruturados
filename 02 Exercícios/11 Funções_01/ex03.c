/*
    Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida em graus Celsius. 
        A fórmula de conversão é: 
        C = (F – 32.0) * (5.0/9.0)
    Sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/
#include <stdio.h>

// Função para converter graus Fahrenheit em graus Celsius
float f_para_c(float f) 
{
    return (f - 32.0) * (5.0/9.0);
}

int main() 
{
    float temperatura_f, temperatura_c;

    printf("Informe a temperatura em graus Fahrenheit: ");
    scanf("%f", &temperatura_f);

    temperatura_c = f_para_c(temperatura_f);

    printf("A temperatura em graus Celsius e: %.2f\n", temperatura_c);

    return 0;
}
