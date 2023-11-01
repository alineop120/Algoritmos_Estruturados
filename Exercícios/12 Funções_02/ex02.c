/*
    Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes durante o ano de 2020. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito. 
*/
#include <stdio.h>

// Parametros/Função
void loc_gratis(int locacoes[500], int qtd_gratis[500])
{
    for(int i = 0; i < 500; i++)
    {
        qtd_gratis[i] = locacoes[i] / 15;
    }
}

int main()
{
// Variaveis
    int locacoes[500], qtd_gratis[500];

// Entrada de Dados
    for(int i = 0; i < 500; i++)
    {
        //Preencher os valor aleatórios de 0 a 10
        locacoes[i] = rand() % 100 + 1;
    }
// Chamar a função
    loc_gratis(locacoes[500], qtd_gratis[500]);

    for(int i = 0; i < 20; i++)
    {
        printf("\n%d e %d", locacoes[i], qtd_gratis[i]);
    }
}
