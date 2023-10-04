#include<stdio.h>

main(){

    int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

   /* soma = A[0] + A[1] + A[5];

    printf("%d", soma);

    A[4] = 100;

    printf("\n%d", A[0]);
    printf("\n%d", A[1]);
    printf("\n%d", A[2]);
    printf("\n%d", A[3]);
    printf("\n%d", A[4]);
    printf("\n%d", A[5]);*/

    for(int i = 0; i < 6; i++){
        //somando somente alguns indices
        if(i == 0 || i == 1 || i == 5){
            soma += A[i];
        }
        if(i == 4){
            A[i] = 100;
        }
        printf("\n%d", A[i]);


    }
    printf("\n\n%d", soma);





}