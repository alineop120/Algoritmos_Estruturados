#include<stdio.h>

main(){

    int a[10], b[10];

     for(int i = 0; i < 10; i++){
        printf("Digite os numeros");
        scanf("%d", &a[i]); 

        b[i] = a[i] * a[i];
    }

    for(int i = 0; i < 10; i++){
        printf("\nA[%d] = %d. B[%d] = %d", i, a[i], i, b[i]);
    }

}
