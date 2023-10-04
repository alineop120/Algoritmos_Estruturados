#include<stdio.h>

main(){
    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Digite os numeros");
        scanf("%d", &vetor[i]); 
    }
    for(int i = 5; i >= 0; i--){
        printf("\n%d", vetor[i]);
    }

}