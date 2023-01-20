#include <stdio.h>

int main(void){
    int i, j, k = 0, soma;
    printf("digite os numeros: ");
    scanf("%d", &i);
    if (k == 0){
        j = i;
        k++;
    }
    soma = i;
    for(j;j > 0; j--){
        scanf("%d", &i);
        soma += i;
    }
    printf("\n\n%d\n\n", soma);


    return 0;
}