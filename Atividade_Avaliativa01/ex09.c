/*
    Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

        - 1,2,3,4 = voto para os respectivos candidatos;

        - 5 = voto nulo;

        - 6 = voto em branco;

    Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

        - total de votos para cada candidato;

        - total de votos nulos;

        - total de votos em branco;

    Como finalizador do conjunto de votos, tem-se o valor 0.
*/
#include <stdio.h>

int main() 
{
//  Variaveis
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votos_nulos = 0, votos_em_branco = 0;

//  Processamento de Dados
    printf("Digite o código do candidato (1 a 4), 5 para voto nulo, 6 para voto em branco ou 0 para encerrar: ");

    while (1) 
    {
        scanf("%d", &voto);

        if (voto == 0) 
        {
            break;  // Encerra a leitura dos votos
        } 
        else if (voto >= 1 && voto <= 4) 
        {
            // Voto para candidato
            switch (voto) {
                case 1:
                    candidato1++;
                    break;
                case 2:
                    candidato2++;
                    break;
                case 3:
                    candidato3++;
                    break;
                case 4:
                    candidato4++;
                    break;
            }
        } 
        else if (voto == 5)
        {
            // Voto nulo
            votos_nulos++;
        } 
        else if (voto == 6) 
        {
            // Voto em branco
            votos_em_branco++;
        } 
        else
        {
            // Voto inválido
            printf("Voto inválido!\n");
        }
    }

    // Saida de Dados - Exibe os resultados
    printf("Total de votos para cada candidato:\n");
    printf("Candidato 1: %d\n", candidato1);
    printf("Candidato 2: %d\n", candidato2);
    printf("Candidato 3: %d\n", candidato3);
    printf("Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos em branco: %d\n", votos_em_branco);

return 0;
}
