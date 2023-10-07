#include <stdio.h>

void main (void) {
    int num[100];
    int count = 0;
    int total_nums;

    do {
        printf("Entre com um numero não nulo ou digite 0 p/ terminar: ");
        scanf("%d", &num[count]);
        count++;
    } while ((num[count-1] != 0) && (count < 100));
        total_nums = count;
        printf("\nOs numeros digitados foram: \n");

    for (count = 0; count < total_nums; count++)
        printf("%d", num[count]);

}