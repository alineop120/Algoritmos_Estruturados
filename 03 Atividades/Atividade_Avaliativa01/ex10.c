/*
    Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  

        - código da cidade

        - estado (RS, SC, PR, SP, RJ, ...)

        - número de veículos de passeio (em 1992)

        - número de acidentes de trânsito com vítimas (em 1992)

    Deseja-se saber:

        (a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

        (b) qual a média de veículos nas cidades brasileiras

        (c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.
*/
#include <stdio.h>
#include <string.h>

int main() 
{
    int num_cidades = 200;
    int codigo_cidade, num_veiculos, num_acidentes;
    char estado[3];
    char cidade_maior_acidente[50], cidade_menor_acidente[50];
    int maior_acidente = -1, menor_acidente = -1;
    int total_veiculos = 0, total_acidentes_RS = 0;
    int num_cidades_RS = 0;

    for (int i = 0; i < num_cidades; i++)
    {
        printf("Informe o código da cidade: ");
        scanf("%d", &codigo_cidade);

        if (codigo_cidade == 0)
        {
            break;  // Encerra a entrada de dados
        }

        printf("Informe o estado da cidade (RS, SC, PR, SP, RJ, ...): ");
        scanf("%s", estado);

        printf("Informe o número de veículos de passeio (em 1992): ");
        scanf("%d", &num_veiculos);

        printf("Informe o número de acidentes de trânsito com vítimas (em 1992): ");
        scanf("%d", &num_acidentes);

        total_veiculos += num_veiculos;

        if (strcmp(estado, "RS") == 0)
        {
            num_cidades_RS++;
            total_acidentes_RS += num_acidentes;
        }

        if (maior_acidente == -1 || num_acidentes > maior_acidente) 
        {
            maior_acidente = num_acidentes;
            strcpy(cidade_maior_acidente, estado);
        }

        if (menor_acidente == -1 || num_acidentes < menor_acidente) 
        {
            menor_acidente = num_acidentes;
            strcpy(cidade_menor_acidente, estado);
        }
    }

    if (num_cidades_RS > 0) 
    {
        double media_acidentes_RS = total_acidentes_RS / num_cidades_RS;
        printf("a) Maior índice de acidentes pertence a %s com %d acidentes.\n", cidade_maior_acidente, maior_acidente);
        printf("   Menor índice de acidentes pertence a %s com %d acidentes.\n", cidade_menor_acidente, menor_acidente);
        printf("b) Média de veículos nas cidades brasileiras: %.2lf\n", total_veiculos / num_cidades);
        printf("c) Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2lf\n", media_acidentes_RS);
    } 
    else 
    {
        printf("Nenhum dado foi inserido para o estado do Rio Grande do Sul.\n");
    }

return 0;
}
