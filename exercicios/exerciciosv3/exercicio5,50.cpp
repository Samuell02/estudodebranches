#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

   
    float n1,desconto, precofinal; 

    printf("Insira o valor do produto:\n");
    scanf("%f",&n1);
    desconto=n1*0.10;
    precofinal=n1-desconto;
    printf("o preco final e e : %.2f\n",precofinal);
    system("pause");
    return 0;
}
