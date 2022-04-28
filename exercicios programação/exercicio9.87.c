#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float saldomedio, creditos;
    printf("Digite o saldomedio:\n");

    scanf("%f",&saldomedio);

    if (400<saldomedio){
            creditos=saldomedio *0.30;
            printf("o aumento e de  e: %.2f",creditos);
            printf("o novo saldomedio  e: %.2f",saldomedio);
}
 else if ((400>saldomedio)&& (300<saldomedio)){
    creditos=saldomedio *0.25;
            printf("o aumento e de  e: %.2f",saldomedio);
            printf("o novo saldomedio  e: %.2f",creditos);
}
else if ((300>saldomedio)&& (200<saldomedio)){
    creditos=saldomedio *0.20;
            printf("o aumento e de  e: %.2f",saldomedio);
            printf("o novo saldomedio  e: %.2f",creditos);
}
else if (saldomedio<=200){
    creditos=saldomedio *0.10;
            printf("o aumento e de  e: %.2f",saldomedio);
            printf("o novo saldomedio  e: %.2f",creditos);
}
}



