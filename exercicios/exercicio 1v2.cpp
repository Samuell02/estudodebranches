#include <stdio.h>
#include <stdlib.h>

int main (void) {

   int n1, n2, n3, n4, soma ;
 
 printf("coloque o primeiro numero /n");
 scanf ("%d*c",&n1);
 
 printf("coloque o segundo numero/n");
 scanf("%d*c",&n2);
 
 printf("coloque o terceiro numero/n");
 scanf("%d*c",&n3);
 
 printf("coloque o quatro numero/n");
 scanf("%d*c",&n4);
 
 soma = n1 + n2 + n3 + n4;
 
 printf("soma = %.1d", soma);
}
