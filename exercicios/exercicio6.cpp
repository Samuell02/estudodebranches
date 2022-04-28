#include <stdio.h>
#include <conio.h>

main () {
     float sal, salreceber,imp,grat;
     printf ("##### calculadora de aumento salarial #####\n");
     printf (" seu salario eh: ");
     scanf ("%f",&sal);
     grat=sal*5/100;
     imp=sal*7/100;
     salreceber=sal  - imp + grat;
     printf ("O salario final eh: %.2f", salreceber);
     getch ();
     }
