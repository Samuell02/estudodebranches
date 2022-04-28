#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float anoatual,anonascimento,idadeatual,idade2050;

    printf("qual o ano atual:\n");
    scanf("%f",&anoatual);
    printf("qual o ano do seu nascimento:\n");
    scanf("%f",&anonascimento);
    idadeatual= anoatual-anonascimento;
    idade2050=2050-anonascimento;
    printf("a sua idade atual e: %.2f\n",idadeatual);
    printf("isso convertido em 2050 eh: %.2f\n",idade2050);

    system("pause");
    return 0;
}
