#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    printf("Digite o ultimo número: ");
    scanf("%f", &n3);

    if (n1 < n2 && n1 < n3){
        if (n2 < n3){
            printf("%f, %f, %f \n", n1, n2, n3);
        } else{
            printf("%f, %f, %f \n", n1, n3, n2);
        }  
    }
    if (n2 < n1 && n2 < n3){
        if (n1 < n3){
            printf("%f, %f, %f \n", n2, n1, n3);
        } else{
            printf("%f, %f, %f \n", n2, n3, n1);
        }
    }
    if (n3 < n1 && n3 < n2){
        if (n1 < n2){
            printf("%f, %f, %f \n", n3, n1, n2);
        } else{
            printf("%f, %f, %f \n", n3, n2, n1);
        }
    }
    if (n1 == n2 && n2 == n3){
        printf("Todos são iguais");
    }
    
    return 0;
}