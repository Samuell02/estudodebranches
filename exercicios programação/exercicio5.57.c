#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2,n3,n4;
    printf("Digite os tres primeiro numeros em ordem crescente,entao digite o quarto numero fora de ordem :\n");
    printf("Digite o primeiro numero :\n");
    scanf("%f",&n1);
    printf("Digite o segundo numero :\n");
    scanf("%f",&n2);
    printf("Digite o terceiro numero :\n");
    scanf("%f",&n3);
     printf("Digite o quarto numero :\n");
    scanf("%f",&n4);


 if ((n4>n3)){
printf ("a ordem decrescente eh:\n");
 printf (" %.2f\n",n4);
 printf (" %.2f\n",n3);
 printf (" %.2f\n",n2);
 printf (" %.2f\n",n1);

 }

 if ((n4>n2)&&(n3>n4)){
    printf ("a ordem decrescente eh:\n");

printf (" %.2f\n",n3);
 printf (" %.2f\n",n4);
 printf (" %.2f\n",n2);
 printf (" %.2f\n",n1);
 }

 if ((n1<n4)&&(n2>n4)){
    printf ("a ordem decrescente eh:\n");

printf (" %.2f\n",n3);
 printf (" %.2f\n",n2);
 printf (" %.2f\n",n4);
 printf (" %.2f\n",n1);
 }

 if ((n4<n1)){
    printf ("a ordem decrescente eh:\n");
 printf (" %.2f\n",n3);
 printf (" %.2f\n",n2);
 printf (" %.2f\n",n1);
 printf (" %.2f\n",n4);

 }




 }


