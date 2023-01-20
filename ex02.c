#include <stdio.h>

int main(void){

    int i;
    for (i = 30; i <= 50; i++){
        printf("celsius %d || fahrenheit %d", i, (i * 9/5) + 32);
        printf("\n");
    }

    return 0;
}