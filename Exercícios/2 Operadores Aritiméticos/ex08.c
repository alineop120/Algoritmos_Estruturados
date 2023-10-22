/*
    Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
    Calcular e escrever o valor do novo salário.
*/
#include <stdio.h>

int main () 
{
    //Variáveis
    float salraioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

    //Entrada de Dados
    printf("Digite o salario atual: ");
    scanf("%f", &salraioAtual);

    printf("Digite a porcentagem de reajusto: ");
    scanf("%f", &porcentagemReajuste);

    //cálculo do reajuste final
    reajusteFinal = porcentagemReajuste / 100;

    //Cálculo do novo sálario
    novoSalario = (salraioAtual * reajusteFinal) + salraioAtual;

    //Saída de dados
    printf("novo salario: %.2f", novoSalario);

return 0;
}
