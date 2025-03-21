#include <stdio.h>

int main(){
    float n1, n2;
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    if (n1 < n2){
        printf("%f, %f \n", n1, n2);

    } else if (n2 < n1){
        printf("%f, %f \n", n2, n1);
    } else{
        printf("Ambos são iguais \n");
    }
}