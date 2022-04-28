#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float peso_saco, racao_gato1, racao_gato2, total_final; 

    printf("Insira o peso do saco de racao, depois a quantidade de racao que o primeiro gato rece, e entao a do segundo gato:\n");
    scanf("%f",&peso_saco);
    scanf("%f",&racao_gato1);
    scanf("%f",&racao_gato2);
    racao_gato1=racao_gato1/1000;
    racao_gato2=racao_gato2/1000;
    total_final=peso_saco-5*(racao_gato1+racao_gato2);
    printf("a quantidade deracao que restara apos 5 dias e: %.2f\n",total_final);
    system("pause");
    return 0;
}
