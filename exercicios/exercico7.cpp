
#include <stdio.h>

int main() {
	float sf, sb, imp=0.10;
	printf (" calculadora de ajuste salarial \n");
	 printf (" seu salario eh: ");
	scanf("%f", &sb);
	sf = sb + 50 - sb*imp;
	printf("O seu novo salario  eh %f", sf);
	return 0;
}
