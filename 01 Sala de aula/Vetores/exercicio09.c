#include <stdio.h>

int main () {

    int vetor[5], num, contador = 0;

//  Incluir somente pares no vetor
    do {
        printf("Digite um numero par: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            vetor[contador] = num;
            contador++;
        } else {
            printf("Numero invalido. Digite novamnete");
        }

    } while (contador < 5);

    for (int i = 0; i < 5; i++) {
        printf("\n%d", vetor[i]);
    }

    for (int i = 4; i >= 0; i--) {
        printf("\n%d", vetor[i]);
    }
    

    return 0;
}