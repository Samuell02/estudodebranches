#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float salario,aumento,novosalario;
    printf("Digite o salario:\n");

    scanf("%f",&salario);

    if (300<=salario){
            aumento=salario *0.15;
            novosalario=salario+aumento;
            printf("o aumento e de  e: %.2f",aumento);
            printf("o novo salario  e: %.2f",novosalario);
}
 if (salario<300){
    aumento=salario *0.30;
            novosalario=salario+aumento;
            printf("o aumento e de  e: %.2f",aumento);
            printf("o novo salario  e: %.2f",novosalario);
}
}



