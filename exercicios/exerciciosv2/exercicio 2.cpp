#include <stdio.h>
#include <stdlib.h>

int main (void) {

   int n1, n2, n3,  soma ;
 
 printf("coloque o primeiro numero /n");
 scanf ("%d*c",&n1);
 
 printf("coloque o segundo numero/n");
 scanf("%d*c",&n2);
 
 printf("coloque o terceiro numero/n");
 scanf("%d*c",&n3);
 

 
 soma = (n1 + n2 + n3)/3 ;
 
 printf("soma = %.1d", soma);
}
