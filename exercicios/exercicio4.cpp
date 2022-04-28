#include<stdio.h>
#include<stdlib.h>

main () {
     float novosal, sal;
     printf (" calculadora de aumento salarial 2\n");
     printf (" o salario atual eh: ");
     scanf ("%f",&sal);
     novosal=(sal*0.25)+ sal;
     printf ("o salario final eh: %.2f", novosal);
     
     }
