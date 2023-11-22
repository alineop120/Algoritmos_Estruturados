/*
    Desenvolver um algoritmo que solicita o usuário um determinado um mês/ano, determinar e exibir o número de dias do mês/ano digitado. Considerar a existência de anos bissextos: (ano % 4 = 0 e ano % 100 =/= 0) ou ano % 400 = 0. Ao final do programa deve ser impressa a seguinte mensagem: VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? Se a resposta for S o programa deverá retornar ao começo, caso contrário (qualquer outro caractere) deverá encerrar a sua execução. 
*/
#include <stdio.h>

int main() 
{
    char continuar;
    
    do 
    {
        int mes, ano;

        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) 
        {
            printf("Mês inválido. Digite um número entre 1 e 12.\n");
            continue;
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);

        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) 
        {
            // Ano bissexto
            switch (mes) 
            {
                case 2:
                    printf("O mês de fevereiro em %d tem 29 dias (ano bissexto).\n", ano);
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    printf("O mês de abril, junho, setembro e novembro em %d tem 30 dias.\n", ano);
                    break;
                default:
                    printf("O mês de %d em %d tem 31 dias.\n", mes, ano);
            }
        } else {
            // Ano não bissexto
            switch (mes) {
                case 2:
                    printf("O mês de fevereiro em %d tem 28 dias (não bissexto).\n", ano);
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    printf("O mês de abril, junho, setembro e novembro em %d tem 30 dias.\n", ano);
                    break;
                default:
                    printf("O mês de %d em %d tem 31 dias.\n", mes, ano);
            }
        }

        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    return 0;
}
