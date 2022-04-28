#include <stdio.h>
#include <conio.h>

main () {
     float sal, perc, aumento, novosal;
     printf (" calculadora de aumento de salario  \n");
     printf ("Informe o  salario: ");
     scanf ("%f", &sal);
     printf ("Informe a porcentagem do aumento: ");
     scanf ("%f", &perc) ;
     aumento=sal * (perc*0.01) ; 
     novosal=aumento+sal;
     printf ("O salario resultante  eh: %.2f", novosal);
     
     }
