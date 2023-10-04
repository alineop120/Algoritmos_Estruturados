#include<stdio.h>

main(){

    int vetor[10], maior, menor;

    for(int i = 0; i < 10; i++){
        printf("Digite os numeros");
        scanf("%d", &vetor[i]); 
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("O maior valor %d e o menor valor %d", maior, menor);


}