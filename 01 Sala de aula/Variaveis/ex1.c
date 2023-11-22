#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    1 - declaração das variáveis
    2 - entrada de dados para armazenamento
    3 - representação dos dados
    4 - escrever o algoritmo
    */

    int idade;
    double peso;
    float salario;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digete seu peso: ");
    scanf("%lf", &peso);

    printf("Digete seu salario: ");
    scanf("%f", &salario);

    printf("As informacao inseridas foram: Idade: %d, Peso: %.3lf, Salario: R$%.2f.", idade, peso, salario);

    return 0;
}