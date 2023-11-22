/*
    Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino e F ou f para feminino), a altura e o peso de um grupo de 10 pessoas. O programa de deve calcular e exibir: 
        -> o número de homens;
        -> o número de mulheres; 
        -> a altura média dos homens;
        -> a altura média das mulheres; a altura média do grupo;
        -> o peso médio dos homens;
        -> o peso médio das mulheres;
        -> e o peso médio do grupo
*/
#include <stdio.h>

int main() 
{
    int num_pessoas = 10;
    int num_homens = 0, num_mulheres = 0;
    double soma_altura_homens = 0, soma_altura_mulheres = 0, soma_altura_total = 0;
    double soma_peso_homens = 0, soma_peso_mulheres = 0, soma_peso_total = 0;

    for (int i = 0; i < num_pessoas; i++) 
    {
        char nome[50];
        char sexo;
        double altura, peso;

        printf("Informe o nome da pessoa %d: ", i + 1);
        scanf("%s", nome);

        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Informe a altura (em metros): ");
        scanf("%lf", &altura);

        printf("Informe o peso (em kg): ");
        scanf("%lf", &peso);

        soma_altura_total += altura;
        soma_peso_total += peso;

        if (sexo == 'M' || sexo == 'm') 
        {
            num_homens++;
            soma_altura_homens += altura;
            soma_peso_homens += peso;
        }
        else if (sexo == 'F' || sexo == 'f') 
        {
            num_mulheres++;
            soma_altura_mulheres += altura;
            soma_peso_mulheres += peso;
        } 
        else 
        {
            printf("Sexo inválido. Ignorando esta pessoa.\n");
            continue;
        }
    }

    if (num_homens > 0) 
    {
        double altura_media_homens = soma_altura_homens / num_homens;
        double peso_media_homens = soma_peso_homens / num_homens;
        printf("Número de homens: %d\n", num_homens);
        printf("Altura média dos homens: %.2lf metros\n", altura_media_homens);
        printf("Peso médio dos homens: %.2lf kg\n", peso_media_homens);
    } 
    else 
    {
        printf("Nenhum homem no grupo.\n");
    }

    if (num_mulheres > 0) 
    {
        double altura_media_mulheres = soma_altura_mulheres / num_mulheres;
        double peso_media_mulheres = soma_peso_mulheres / num_mulheres;
        printf("Número de mulheres: %d\n", num_mulheres);
        printf("Altura média das mulheres: %.2lf metros\n", altura_media_mulheres);
        printf("Peso médio das mulheres: %.2lf kg\n", peso_media_mulheres);
    } 
    else 
    {
        printf("Nenhuma mulher no grupo.\n");
    }

    double altura_media_total = soma_altura_total / num_pessoas;
    double peso_media_total = soma_peso_total / num_pessoas;
    printf("Altura média do grupo: %.2lf metros\n", altura_media_total);
    printf("Peso médio do grupo: %.2lf kg\n", peso_media_total);

return 0;
}
