#include <stdio.h>
#include <conio.h>

main () {
     float dep, taxa, rend, total;
     printf (" calculadora de rendimento de deposito \n");
     printf ("Informe o valor do deposito: ");
     scanf ("%f", &dep);
     printf ("Informe o valor dos juros: ");
     scanf ("%f", &taxa);
     rend=dep*(taxa*0.01);
     printf ("O quanto rende: %.2f \n", rend);
     total=dep+rend;
     printf ("O valor final do rendimento eh: %.2f", total);
     getch();
     }
