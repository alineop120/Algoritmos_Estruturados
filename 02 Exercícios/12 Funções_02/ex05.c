/*
    Faça uma função que recebe a data de nascimento de uma pessoa em apresente sua idade expressa em dias, meses e anos.
*/
#include <stdio.h>
#include <time.h>

void calcular_idade(struct tm data_nascimento) {
    time_t agora = time(NULL);
    struct tm *hoje = localtime(&agora);
    int anos = hoje->tm_year - data_nascimento.tm_year;
    int meses = hoje->tm_mon - data_nascimento.tm_mon;
    int dias = hoje->tm_mday - data_nascimento.tm_mday;
    if (meses < 0 || (meses == 0 && dias < 0)) {
        anos--;
        meses += 12;
    }
    if (dias < 0) {
        dias += 30;
        meses--;
    }
    printf("A idade da pessoa é %d anos, %d meses e %d dias.\n", anos, meses, dias);
}

// Exemplo de uso
int main() {
    struct tm data_nascimento = {0};
    data_nascimento.tm_year = 1990 - 1900;
    data_nascimento.tm_mon = 0;
    data_nascimento.tm_mday = 1;
    calcular_idade(data_nascimento);
    return 0;
}
