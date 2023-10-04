#include<stdio.h>

main(){
    int vetor[5], num, contador = 0;

    //incluir somente pares no vetor
    do{
        printf("Digite um numero par:");
        scanf("%d", &num);
        if(num % 2 == 0){
            vetor[contador] = num;
            contador++;
        }else{
            printf("Numero invalido. Digite novamente:");
        }
    }while(contador < 5);

    //ordem normal
    for(int i = 0; i < 5; i++){
        printf("\n%d", vetor[i]);
    }
    //ordem inversa
    for(int i = 4; i >= 0; i--){
        printf("\n%d", vetor[i]);
    }

}