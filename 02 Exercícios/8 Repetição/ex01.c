/*
    Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu a um questionário, no qual constava:
        - sua idade;
        - sua opinião em relação ao filme, segundo as seguintes notas:

        |   Nota   | Significado
        |    A     |  Ótimo
        |    B     |  Bom
        |    C     |  Regular
        |    D     |  Ruim
        |    E     |  Péssimo

    Elabore um algoritmo que, lendo estes dados, calcule e imprima:
        Quantidade de respostas ótimo;
        Diferença percentual entre respostas bom e regular;
        Média de idade das pessoas que responderam ruim;
        Percentagem de respostas péssimo e a maior idade que utilizou esta opção;
        Diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim. 
*/
#include <stdio.h>

int main() 
{
    int quantidade_otimo = 0;
    int quantidade_bom = 0;
    int quantidade_regular = 0;
    int quantidade_ruim = 0;
    int quantidade_pessimo = 0;
    int soma_idade_ruim = 0;
    int total_ruim = 0;
    int maior_idade_pessimo = -1;
    int maior_idade_otimo = -1;
    int maior_idade_ruim = -1;

    int total_espectadores = 100;

    for (int i = 0; i < total_espectadores; i++) 
    {
        int idade;
        char opiniao;

        printf("Digite a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);

        printf("Digite a opinião (A, B, C, D, E) do espectador %d: ", i + 1);
        scanf(" %c", &opiniao);

        switch (opiniao) 
        {
            case 'A':
                quantidade_otimo++;
                if (idade > maior_idade_otimo) 
                {
                    maior_idade_otimo = idade;
                }
                break;
            case 'B':
                quantidade_bom++;
                break;
            case 'C':
                quantidade_regular++;
                break;
            case 'D':
                quantidade_ruim++;
                soma_idade_ruim += idade;
                total_ruim++;
                if (idade > maior_idade_ruim) 
                {
                    maior_idade_ruim = idade;
                }
                break;
            case 'E':
                quantidade_pessimo++;
                if (idade > maior_idade_pessimo) 
                {
                    maior_idade_pessimo = idade;
                }
                break;
            default:
                printf("Opinião inválida. Por favor, escolha entre A, B, C, D, ou E.\n");
                i--;
        }
    }

    float diferenca_percentual = ((float)quantidade_bom - quantidade_regular) / total_espectadores * 100;
    float media_idade_ruim = total_ruim > 0 ? (float)soma_idade_ruim / total_ruim : 0;

    printf("Quantidade de respostas 'Ótimo': %d\n", quantidade_otimo);
    printf("Diferença percentual entre 'Bom' e 'Regular': %.2f%%\n", diferenca_percentual);
    printf("Média de idade das pessoas que responderam 'Ruim': %.2f anos\n", media_idade_ruim);
    printf("Percentagem de respostas 'Péssimo': %.2f%%\n", ((float)quantidade_pessimo / total_espectadores) * 100);
    printf("Maior idade que respondeu 'Péssimo': %d anos\n", maior_idade_pessimo);
    printf("Diferença de idade entre a maior idade 'Ótimo' e 'Ruim': %d anos\n", maior_idade_otimo - maior_idade_ruim);

return 0;
}
