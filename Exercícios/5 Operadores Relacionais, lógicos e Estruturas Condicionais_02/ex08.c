/*
    Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. 

    As condições para aposentadoria são: 
        • Ter pelo menos 65 anos; 
        • Ou ter trabalhado pelo menos 30 anos;, 
        • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 
*/
#include <stdio.h>

int main () 
{
//  Variáveis
    int idade, tempo_servico;

//  Informações sobre o trabalhador
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico: ");
    scanf("%d", &tempo_servico);

//  Executando os Dados Informados e Monstrando o Resultado
    if ( (idade >= 65) || (tempo_servico >= 30) || (idade >= 60) || (tempo_servico >= 25) ) 
    {
        printf("Voce PODE se aposentar");
    } 
    else 
    {
        printf("Voce NAO PODE se aponsentar");
    }

return 0;
}
