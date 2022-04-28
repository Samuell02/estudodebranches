#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float custodefabrica, taxadodistrubuidor,impostos,precofinal;
    printf("Digite o custodefabrica:\n");

    scanf("%f",&custodefabrica);

    if (custodefabrica<=1200){
            taxadodistrubuidor=custodefabrica *0.5;
            precofinal=taxadodistrubuidor+custodefabrica;

            printf("o aumento e de  e: %.2f",taxadodistrubuidor);
            printf("o novo custodefabrica  e: %.2f",custodefabrica);
}
 else if ((12000<custodefabrica)&& (25000>custodefabrica)){
    taxadodistrubuidor=custodefabrica *0.10;
    impostos=custodefabrica*0.15;
     precofinal=taxadodistrubuidor+impostos+custodefabrica;
     printf("o novo custodefabrica  e: %.2f",taxadodistrubuidor);
}
else if (25000>custodefabrica){
    taxadodistrubuidor=custodefabrica *0.15;
    impostos=custodefabrica*0.20;
    precofinal=custodefabrica+taxadodistrubuidor+impostos;

            printf("o preco final   e: %.2f",precofinal);
}

}



