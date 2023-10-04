/*

*/
#include <stdio.h>

int main () {

    float valores[10], soma_positivos = 0, qtd_negativos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Inserir as notas: ");
        scanf("%f", &valores[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        for(valores[i] > 0) {
        soma_positivos += valores[i];
        } else {
            
        }
    }

}