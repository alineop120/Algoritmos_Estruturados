#include <stdio.h>

/*
    Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = abril
*/

//  
int mes(int num_mes) {
    switch (num_mes)
    {
    case 1:
        
        break;
    
    default:
        break;
    }
} 

//  Entrada de Dados
int main() {
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    int resultado = mes(num_mes);

    printf("O mes e: %d", resultado);

    return 0;
}