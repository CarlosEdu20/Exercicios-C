#include <stdio.h>

void main() {
   int num;
   double E = 0.0;
   double fatorial;

   printf("Digite um numero: ");
   scanf("%d", &num);

   for (int i = 1; i <= num; i++) {
      fatorial = 1;

      for (int j = 1; j <= i; j++) {
         fatorial *= j;
      }

      E += 1.0 / fatorial;
   }
   printf("O resultado eh: %.2lf", E);






}