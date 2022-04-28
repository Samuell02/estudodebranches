#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2,n3,p1,p2,p3,mediaponderada;
    printf("Digite a primeira nota e entao seu peso:\n");
    scanf("%f",&n1);
    scanf("%f",&p1);
    printf("Digite a segunda nota e entao seu peso:\n");
    scanf("%f",&n2);
    scanf("%f",&p2);
    printf("Digite a terceira nota e entao seu peso:\n");
    scanf("%f",&n3);
    scanf("%f",&p3);
    mediaponderada=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);


     if (mediaponderada=7<=8){
    printf("Conceito B");
    }

     if (mediaponderada=6<=7){
    printf("Conceito C");
    }

     if (mediaponderada=5<=6){
    printf("Conceito D");
    }
if (mediaponderada=0<=5){printf("Conceito E");}




    return 0;
}
