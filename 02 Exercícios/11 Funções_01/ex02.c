/*
    Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = abril
*/
#include <stdio.h>

// Função para imprimir o mês com base no número
void imprimirMes(int num_mes) 
{
    switch (num_mes) 
    {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Mês inválido\n");
            break;
    }
}

int main() 
{
    int num;

    printf("Digite um número de 1 a 12 para obter o mês correspondente: ");
    scanf("%d", &num);

    imprimirMes(num);

    return 0;
}
