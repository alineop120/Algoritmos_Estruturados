/*

*/
#include <stdio.h>

int main() {

    float valores[10], soma_positivos = 0, qtd_negativos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Inserir as notas: ");
        scanf("%f", &valores[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (valores[i] > 0) {
            soma_positivos += valores[i];
        } else {
            qtd_negativos++;
        }
        printf("A soma dos positivos eh %.2f e a quantidade de negativos eh %i\n", soma_positivos, qtd_negativos);

        return 0;
    }
}