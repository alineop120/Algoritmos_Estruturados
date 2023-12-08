/*
    Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria dos Transportes criou o seguinte registro padrão:
        Proprietário:__________________________ Combustível:____________________
        Modelo: _____________________________ Cor: __________________________
        Nº chassi: _________________________ Ano: __________ Placa: ____________
    Em que:
        • Combustível pode ser álcool, diesel ou gasolina;
        • Placa possui os três primeiros valores alfabéticos e os quatro restantes valores numéricos.
    Sabendo que não temos uma definição do número máximo de veículos da cidade e que é preciso armazenar todos os valores em uma lista encadeada simples, construa:
        (a) Uma função que liste todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel. (1,0 ponto)
        (b) Uma função que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários. (1,0 ponto)
        (c) Uma função que liste o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par. (1,0 ponto)
        (d) Uma função que permita a troca de proprietário com o fornecimento do número do chassi apenas para carros com placas que não possuam nenhum dígito igual a zero. (1,0 ponto)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura do veículo
struct Veiculo {
    char proprietario[50];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[8];
    struct Veiculo *prox;
};

// Funções
void inserirVeiculo(struct Veiculo **lista, struct Veiculo novoVeiculo) {
    struct Veiculo *novoNo = malloc(sizeof(struct Veiculo));
    *novoNo = novoVeiculo;
    novoNo->prox = *lista;
    *lista = novoNo;
}

void listarDiesel2010OuPosterior(struct Veiculo *lista) {
    while (lista != NULL) {
        if (strcmp(lista->combustivel, "Diesel") == 0 && lista->ano >= 2010) {
            printf("Proprietario: %s\n", lista->proprietario);
        }
        lista = lista->prox;
    }
}

void listarPlacasJ0_2_4_7(struct Veiculo *lista) {
    while (lista != NULL) {
        if (lista->placa[0] == 'J' && (lista->placa[7] == '0' || lista->placa[7] == '2' || lista->placa[7] == '4' || lista->placa[7] == '7')) {
            printf("Placa: %s, Proprietario: %s\n", lista->placa, lista->proprietario);
        }
        lista = lista->prox;
    }
}

void listarVogalSomaPar(struct Veiculo *lista) {
    while (lista != NULL) {
        char vogais[] = "AEIOUaeiou";
        int soma = 0;
        for (int i = 2; i < 7; i++) {
            soma += lista->placa[i] - '0';
        }

        if (strchr(vogais, lista->placa[1]) != NULL && soma % 2 == 0) {
            printf("Modelo: %s, Cor: %s\n", lista->modelo, lista->cor);
        }
        lista = lista->prox;
    }
}

void trocarProprietario(struct Veiculo *lista, const char *novoProprietario, const char *chassi) {
    while (lista != NULL) {
        if (strcmp(lista->chassi, chassi) == 0 && strchr(lista->placa, '0') == NULL) {
            strcpy(lista->proprietario, novoProprietario);
            printf("Proprietario do veiculo com chassi %s foi atualizado para %s.\n", chassi, novoProprietario);
            return;
        }
        lista = lista->prox;
    }
    printf("Veiculo com chassi %s nao encontrado ou possui dígito zero na placa.\n", chassi);
}

// Código Principal
int main() {
    struct Veiculo *lista = NULL;

    // Exemplo de inserção de veículos na lista
    struct Veiculo veiculo1 = {"Prop1", "Diesel", "Modelo1", "Cor1", "Chassi1", 2012, "J123XYZ"};
    struct Veiculo veiculo2 = {"Prop2", "Gasolina", "Modelo2", "Cor2", "Chassi2", 2015, "ABC2345"};
    struct Veiculo veiculo3 = {"Prop3", "Diesel", "Modelo3", "Cor3", "Chassi3", 2010, "JKL5678"};

    inserirVeiculo(&lista, veiculo1);
    inserirVeiculo(&lista, veiculo2);
    inserirVeiculo(&lista, veiculo3);

    // Exemplo de chamada das funções
    printf("a. Listagem de proprietários de carros a diesel do ano de 2010 ou posterior:\n");
    listarDiesel2010OuPosterior(lista);

    printf("\nb. Listagem de placas que começam com J e terminam com 0, 2, 4 ou 7 e seus proprietários:\n");
    listarPlacasJ0_2_4_7(lista);

    printf("\nc. Listagem de modelo e cor de veículos com placas que têm segunda letra vogal e soma numérica par:\n");
    listarVogalSomaPar(lista);

    printf("\nd. Troca de proprietário para carros com placas sem dígitos iguais a zero:\n");
    trocarProprietario(lista, "NovoProprietario", "Chassi1");

    // Liberar memória alocada para a lista (pode ser feito ao final do programa)
    while (lista != NULL) {
        struct Veiculo *temp = lista;
        lista = lista->prox;
        free(temp);
    }

    return 0;
}
