#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq; 

    printf("Digite o numero de horas, e depois disso digite o valor do salario minimo:\n");
    scanf("%f",&horas_t);
    scanf("%f",&vlr_sal_min);
    vlr_hora_t=vlr_sal_min/2;
    vlr_sal_bru=vlr_hora_t*horas_t;
    imp=vlr_sal_bru*3/100;
    vlr_sal_liq=vlr_sal_bru-imp;
    printf("o valor correspondente ao salario a receber e: %.2f\n",vlr_sal_liq);
    system("pause");
    return 0;
}
