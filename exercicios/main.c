#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main() {

  
  int numero;
  printf("Digite um n�mero: ");
  scanf("%d%*c", &numero);

  int aoQuadrado = pow(numero, 2);
  int aoCubo = pow(numero, 3);
  float raizQuadrada = sqrt(numero);
  float raizCubica = cbrt(numero);

  printf("O n�mero %d ao quadrado �: %d\n", numero, aoQuadrado);
  printf("O n�mero %d ao cubo �: %d\n", numero, aoCubo);
  printf("A raiz quadrada do n�mero %d �: %.2f\n", numero, raizQuadrada);
  printf("A raiz cubica do n�mero %d �: %.2f\n", numero, raizCubica);
  return 0;
}
