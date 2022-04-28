#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float anoatual, anonascimento, idadeatual, idade2050;
    printf("Digite o ano atual:\n");
    scanf("%f",&anoatual);
    printf("Digite o ano de seu nascimento:\n");
    scanf("%f",&anonascimento);
    idadeatual=anoatual-anonascimento;
    idade2050=2050-anonascimento;
    printf("sua idade atual e: %.2f\n",idadeatual);
    printf("sua idade em 2050 será: %.2f\n",idade2050);
    system("pause");
    return 0;
}
