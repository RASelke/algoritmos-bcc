#include <stdio.h>

unsigned int fatorial(unsigned int n){
    if(n == 0){
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}
    
int main(){
    int resp;
    printf("Digite um valor: ");
    scanf("%d", &resp);
    printf("%d\n", fatorial(resp));
    return 0;
}