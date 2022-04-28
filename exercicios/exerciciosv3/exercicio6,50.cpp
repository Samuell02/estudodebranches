#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

   
    float salariofixo,vendas,comissao,salariofinal; 

    printf("Insira o valor do salario e entao o valor das vendas:\n");
    scanf("%f",&salariofixo);
    scanf("%f",&vendas);
    comissao=vendas*0.04;
    salariofinal=vendas+comissao+salariofixo;
    
    printf("a comissao e  : %.2f\n",comissao);
    printf(" o salario final e  : %.2f\n",salariofinal);
    system("pause");
    return 0;
}
