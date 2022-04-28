#include<stdio.h>
#include<stdlib.h>
int main(void)
{

  float nota_trab, aval_sem, exame, media;


  printf("digite a nota do trabalho de laboratorio: ");
  scanf("%f",&nota_trab);

  printf("insira a nota da avaliaçao semestral: ");
  scanf("%f",&aval_sem);

  printf("insira a nota do exame final: ");
  scanf("%f",&exame);
  media=(nota_trab*2)+(aval_sem*3)+(exame)/10;
  printf ("media ponderada: %.2f\n",media);


 if (media>=8&&media<=10){
    printf("obteve conceito a");
 }
 if (media>=7 && media<8){
    printf("obteve conceito b");
 }
 if (media>=6 && media<7){
    printf("obteve conceito c");
 }
 if  (media>=5 && media<6){
    printf("obteve conceito d");
 }
 if (media>=0 && media<5){
    printf("obteve conceito e");
 }}



