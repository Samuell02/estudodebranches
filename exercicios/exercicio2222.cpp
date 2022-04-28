#include<stdio.h>
#include<stdlib.h>
int main(void)
{

  float n1, n2, n3, media;
  
  
  printf("insira a primeira nota do aluno: ");
  scanf("%f",&n1);
  
  printf("insira a primeira nota do aluno: ");
  scanf("%f",&n2);
  
  printf("insira a terceira nota do aluno: ");
  scanf("%f",&n3);
  
  
  media = (n1 + n2 + n3) / 3;
  
  
  printf("Media do aluno = %.1f\n",media);
  
  
  return 0;
}
