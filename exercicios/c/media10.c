#include <stdio.h>

int main() {

    int i;
    float soma, media;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        int n;
        scanf("%d", &n);
        soma = soma + n;
    }

    media = soma / 10;

    printf("A media e %.2f", media);
    return 0;
}