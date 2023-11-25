/*
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

        a) média do salário da população;

        b) média do número de filhos;

        c) maior salário;

        d) percentual de pessoas com salário até R$100,00.

    O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do-while) .
*/
#include <stdio.h>

int main() 
{
    double salario, media_salario, media_filhos, maior_salario;
    int num_filhos, total_habitantes, habitantes_salario_ate_100;
    total_habitantes = habitantes_salario_ate_100 = 0;
    media_salario = media_filhos = maior_salario = 0.0;

    do 
    {
        printf("Informe o salário do habitante (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario >= 0) 
        {
            printf("Informe o número de filhos do habitante: ");
            scanf("%d", &num_filhos);

            // Atualiza a média de salário
            media_salario += salario;

            // Atualiza a média de filhos
            media_filhos += num_filhos;

            // Verifica o maior salário
            if (salario > maior_salario) 
            {
                maior_salario = salario;
            }

            // Verifica se o salário é até R$100,00
            if (salario <= 100.0)
            {
                habitantes_salario_ate_100++;
            }

            total_habitantes++;
        }
    }
    while (salario >= 0);

    if (total_habitantes > 0) 
    {
        media_salario /= total_habitantes;
        media_filhos /= total_habitantes;
        double percentual_salario_ate_100 = (double)habitantes_salario_ate_100 / total_habitantes * 100;

        printf("a) Média do salário da população: %.2lf\n", media_salario);

        printf("b) Média do número de filhos: %.2lf\n", media_filhos);
        
        printf("c) Maior salário: %.2lf\n", maior_salario);

        printf("d) Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentual_salario_ate_100);
    }
    else
    {
        printf("Nenhum dado foi inserido.\n");
    }

return 0;
}

