/*
    Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 

        61 - Brasília 

        71 - Salvador 

        11 - São Paulo 

        21 - Rio de Janeiro 

        32 - Juiz de Fora 

        19 - Campinas 

        27 - Vitória 

        31 - Belo Horizonte 

    Qualquer outro - uma cidade no Brasil sem identificação 
*/
#include <stdio.h>

int main () 
{
//  Varáiveis
    int num_DDD;

//  Informando o DDD  
    printf("Informe um DDD: "); 
    scanf("%d", &num_DDD);

// Execudando e Mostrando os DDD de umas das cidades do Brasil
    switch (num_DDD) 
    {
    case 61:
        printf("DDD de Brasilia.");
        break;
    
    case 71:
        printf("DDD de Salvador.");
        break;

    case 11:
        printf("DDD de Sao Paulo.");
        break;

    case 21:
        printf("DDD de Rio de Janeiro.");
        break;

    case 32:
        printf("DDD de Juiz de Fora.");
        break;

    case 19:
        printf("DDD de Campinas.");
        break;

    case 27:
        printf("DDD de Vitoria.");
        break;

    case 31: 
        printf("DDD de Belo Horizonte.");
        break;

    default:
        printf("SEM IDENTIFICACAO!");
    }

    return 0;
}