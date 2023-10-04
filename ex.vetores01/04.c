#include<stdio.h>

main(){

    int vetor[8], x, y, soma = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite os numeros");
        scanf("%d", &vetor[i]); 
    }

    do{
        printf("Digite os valores para x e y ( entre 0 e 7)");
        scanf("%d %d", &x, &y);
        if((x >= 0 && x < 8) && (y >= 0 && y < 8) ){
            for(int i = 0; i < 8; i++){
                if(i == x){
                    soma += vetor[i];
                }
                if(y == i){
                    soma += vetor[i];
                }
            }
        }else{
            printf("Valores de x e y invalidos");
        }
    }while(x < 0 || x > 7 && y < 0 || y > 7);

    printf("Soma os valores das posicoes %d e %d = %d", x, y, soma);

}