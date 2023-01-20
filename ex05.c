#include <stdio.h>

int main(void){
    int num, i, soma = 0, quadrado = 0, cubo = 0;
    printf("digite um numero: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        soma += i;
        quadrado = (i * i) + quadrado;
        cubo = (i * i * i) + cubo;
    }
    printf("soma: %d\n", soma);
    printf("quadrado: %d\n", quadrado);
    printf("cubo: %d\n", cubo);
    return 0;
}