#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2,n3,mediaponderada,Exame;
    printf("Digite a primeira nota e entao seu peso:\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota e entao seu peso:\n");
    scanf("%f",&n2);;
    printf("Digite a terceira nota e entao seu peso:\n");
    scanf("%f",&n3);
    mediaponderada=(n1+n2+n3)/3;
    Exame=12-mediaponderada;




 if ((mediaponderada>=6)&&(mediaponderada<=10)) {
    printf("Aprovado");
    }
else if ((mediaponderada>=3)&&(mediaponderada<7)) {


     printf("o aluno precisa tirar a seguinte nota: = %.1f\n",Exame);
    }
else if ((mediaponderada>=0)&&(mediaponderada<3)){
    printf("Reprovado");
    }





}
