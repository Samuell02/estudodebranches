#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int user_response;
  do{
  float n1, n2, n3,n4, resultado;


  printf("insira o primeiro numero: ");
  scanf("%f",&n1);

  printf("insira o segundo numero: ");
  scanf("%f",&n2);

  printf("insira o terceiro numero: ");
  scanf("%f",&n3);

  printf("insira o quarto numero: ");
  scanf("%f",&n4);

  resultado = (n1 + n2 + n3 + n4) ;


  printf(" A total soma dos numeros eh = %.1f\n",resultado);

  printf("gostaria de calcular denovo? (1 - yes, 0 - no) ");
  scanf("%d", &user_response);

   } while (user_response == 1);
    return 0;
}


