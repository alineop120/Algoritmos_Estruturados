/*
    A Copa do Mundo de Futebol Feminino é a competição mais importante no futebol feminino internacional, ela é organizada pela Federação Internacional de Futebol (FIFA) e está acontecendo este ano na França. Você foi contratado para desenvolver um algoritmo para realizar uma pesquisa para saber qual das jogadoras listadas na tabela abaixo é considerada a melhor. Na pesquisa deverá ser solicitado o nome, idade (maior que 12 anos), sexo (masculino e feminino) da pessoa entrevistada e o voto (não pode ser diferente dos que se encontram na tabela). O número de pessoas entrevistadas não poderá ser inferior a 50 e não poderá ultrapassar 300, o algoritmo poderá ser finalizado a qualquer momento desde que se obedeça ao critério anterior. 

            _____________________________________
            |           JOGADORAS               |
    ________|___________________________________|
    |   1   |   Sam Kerr - Austrálía            |
    |   2   |   Alex morgan - Estados Unidos    |
    |   3   |   Dzsenifer marozsan - Alemanha   |
    |   4   |   Amandine Henry - França         |
    |   5   |   Marta Vieira - Brasil           |
    |_______|___________________________________|

    Após receber todos os dados dos entrevistados, deverá ser gerado os seguintes relatórios: 
        ✓ Exibir a quantidade de votos que cada jogadora recebeu.
        ✓ Exibir a jogadora mais votada (caso aconteça empate entre mais de uma jogadora, deverá mostrar todas as que empataram).
        ✓ Exibir o nome, idade e sexo de todas as pessoas que participaram da pesquisa, separando por sexo, maior de idade e menor de idade.
        ✓ Exibir o nome das pessoas maior de idade que votaram na Marta Vieira.
        ✓ Exibir a quantidade de mulheres que participaram da pesquisa.
*/
#include <stdio.h>
#include <string.h>

#define MAX_JOGADORAS 5
#define MAX_PESSOAS 300
#define MIN_PESSOAS 50

struct Jogadora {
    char nome[50];
    int votos;
};

struct Pessoa {
    char nome[50];
    int idade;
    char sexo;
    char voto[50];
};

int main() {
    int num_pessoas = 0;
    struct Pessoa pessoas[MAX_PESSOAS];
    struct Jogadora jogadoras[MAX_JOGADORAS] = {
        {"Marta Vieira", 0},
        {"Cristiane Rozeira", 0},
        {"Alex Morgan", 0},
        {"Ada Hegerberg", 0},
        {"Sam Kerr", 0}
    };

    while (1) {
        if (num_pessoas >= MAX_PESSOAS) {
            printf("Número máximo de pessoas atingido.\n");
            break;
        }

        char nome[50];
        int idade;
        char sexo;
        char voto[50];

        printf("Nome: ");
        scanf("%s", nome);

        if (strcmp(nome, "FIM") == 0) {
            if (num_pessoas < MIN_PESSOAS) {
                printf("Número mínimo de pessoas não atingido. A pesquisa será encerrada.\n");
            }
            break;
        }

        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 13) {
            printf("A idade deve ser maior ou igual a 13 anos. Descartando voto.\n");
            continue;
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo deve ser M (masculino) ou F (feminino). Descartando voto.\n");
            continue;
        }

        printf("Voto (Marta Vieira, Cristiane Rozeira, Alex Morgan, Ada Hegerberg, Sam Kerr): ");
        scanf("%s", voto);

        int voto_valido = 0;
        for (int i = 0; i < MAX_JOGADORAS; i++) {
            if (strcmp(voto, jogadoras[i].nome) == 0) {
                voto_valido = 1;
                jogadoras[i].votos++;
                break;
            }
        }

        if (!voto_valido) {
            printf("Voto inválido. Descartando voto.\n");
            continue;
        }

        strcpy(pessoas[num_pessoas].nome, nome);
        pessoas[num_pessoas].idade = idade;
        pessoas[num_pessoas].sexo = sexo;
        strcpy(pessoas[num_pessoas].voto, voto);

        num_pessoas++;
    }

    printf("Quantidade de votos para cada jogadora:\n");
    for (int i = 0; i < MAX_JOGADORAS; i++) {
        printf("%s: %d votos\n", jogadoras[i].nome, jogadoras[i].votos);
    }

    int max_votos = 0;
    printf("Jogadoras mais votadas:\n");
    for (int i = 0; i < MAX_JOGADORAS; i++) {
        if (jogadoras[i].votos > max_votos) {
            max_votos = jogadoras[i].votos;
        }
    }
    for (int i = 0; i < MAX_JOGADORAS; i++) {
        if (jogadoras[i].votos == max_votos) {
            printf("%s\n", jogadoras[i].nome);
        }
    }

    printf("Pessoas que participaram da pesquisa:\n");
    printf("Mulheres:\n");
    for (int i = 0; i < num_pessoas; i++) {
        if (pessoas[i].sexo == 'F') {
            printf("%s, idade: %d\n", pessoas[i].nome, pessoas[i].idade);
        }
    }
    printf("Homens:\n");
    for (int i = 0; i < num_pessoas; i++) {
        if (pessoas[i].sexo == 'M') {
            printf("%s, idade: %d\n", pessoas[i].nome, pessoas[i].idade);
        }
    }

    printf("Pessoas maiores de idade que votaram na Marta Vieira:\n");
    for (int i = 0; i < num_pessoas; i++) {
        if (pessoas[i].idade >= 18 && strcmp(pessoas[i].voto, "Marta Vieira") == 0) {
            printf("%s, idade: %d\n", pessoas[i].nome, pessoas[i].idade);
        }
    }

    int num_mulheres = 0;
    for (int i = 0; i < num_pessoas; i++) {
        if (pessoas[i].sexo == 'F') {
            num_mulheres++;
        }
    }
    printf("Quantidade de mulheres que participaram da pesquisa: %d\n", num_mulheres);

    return 0;
}
