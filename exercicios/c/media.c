#include <stdio.h>
int main() {
   float n1, n2;

   printf("Digite um numero: ");
   scanf("%f", &n1);

   printf("Digite outro numero: ");
   scanf("%f", &n2);

   float media = (n1 + n2) / 2;
   printf("Average = %.2f", media);
   return 0;
}