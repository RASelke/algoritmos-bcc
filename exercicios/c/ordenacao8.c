#include <stdio.h>

int main(){
    float n, numbers[8];
    int i;

    for (i; i < 8; i++){
        printf("Digite um número: ");
        scanf("%f", numbers[i]);
        printf("%f \n", numbers[i]);
    }
}