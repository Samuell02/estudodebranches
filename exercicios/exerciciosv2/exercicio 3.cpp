#include <stdio.h>
#include <stdlib.h>

int main (void) {

   float n1, n2, n3, p1, p2, p3,  soma ;
 
 printf("coloque o primeiro numero /n");
 scanf ("%f%*c",&n1);
 
 printf("coloque o peso do primeiro numero");
 scanf ("%f%*c",&p1);
 
 printf("coloque o segundo numero/n");
 scanf("%f%*c",&n2);
 
 printf ("coloque o peso do segundo numero");
 scanf ("%f%*c", &p2);
 
 printf("coloque o terceiro numero/n");
 scanf("%f%*c",&n3);
 
 printf("coloque o peso do terceiro numero");
 scanf("%f%*c", &p3);
 

 
 soma = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3) ;
 
 printf("soma = %.1f", soma);
}
