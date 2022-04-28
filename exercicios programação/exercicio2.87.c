#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2,n3,mediaponderada,Exame;
    printf("Digite a primeira nota :\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota :\n");
    scanf("%f",&n2);;
    printf("Digite a terceira nota :\n");
    scanf("%f",&n3);
    mediaponderada=(n1+n2+n3)/3;
    Exame=12-mediaponderada;




 if ((mediaponderada>=7)&&(mediaponderada<=10)) {
    printf("Aprovado");
    }
else if ((mediaponderada>=4)&&(mediaponderada<7)) {


     printf("Exame");
    }
else if ((mediaponderada>=0)&&(mediaponderada<4)){
    printf("Reprovado");
    }





}
