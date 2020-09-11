#include<stdio.h>

int main(){

    int botas, i, j, tamanho[6], qtd=0;
    char lado[6];

    scanf("%d", &botas);

    for(i = 0; i < botas; i++){
        scanf("%d %c", &tamanho[i], &lado[i]);
    }

    for(i = 0; i< botas; i++){
        for(j = 0; j < botas; j++){
            if(tamanho[i] == tamanho[j]){
                if(lado[i] == lado[j]){
                    qtd++;
                }
            }
        }
    }

    printf("%d\n", qtd/2); 

    return 0;
}