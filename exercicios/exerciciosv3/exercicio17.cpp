#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo; 

    printf("Insira o salario, depois o primeiro cheque, e entao o segundo cheque:\n");
    scanf("%f",&salario);
    scanf("%f",&cheque1);
    scanf("%f",&cheque2);
    cpmf1=cheque1*0.38/100;
    cpmf2=cheque2*0.38/100;
    saldo=salario-cheque1-cheque2-cpmf1-cpmf2;
    printf("o saldo atual e: %.2f\n",saldo);
    system("pause");
    return 0;
}
