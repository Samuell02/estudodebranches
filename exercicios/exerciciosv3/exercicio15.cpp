#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;
    printf("Digite preço de fabrica:\n");
    scanf("%f",&p_fab);
    printf("Digite o percentual de lucro do distribuidor:\n");
    scanf("%f",&perc_d);
    printf("Digite o percentual de impostos:\n");
    scanf("%f",&perc_i);
    vlr_d= p_fab*perc_d/100;
    vlr_i= p_fab*perc_i/100;
    p_final=p_fab+vlr_d+vlr_i;
    printf("o valor correspondente ao lucro do distribuidor e: %.2f\n",vlr_d);
    printf("o valor correspondente aos  impostos e: %.2f\n",vlr_i);
    printf("o valor correspondente ao preco final do veiculo eh: %.2f\n",p_final);
    system("pause");
    return 0;
}
