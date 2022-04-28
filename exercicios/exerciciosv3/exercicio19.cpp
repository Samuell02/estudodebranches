#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float a_degrau, a_usuario, qtd_degraus; 

    printf("Insira a altura dos degrais da escada, e entao coloque a altura que voce deseja alcancar subindo a escada:\n");
    scanf("%f",&a_degrau);
    scanf("%f",&a_usuario);
    qtd_degraus=a_usuario/a_degrau;
    printf("a quantidade de degraus que voce devera subir e: %.2f\n",qtd_degraus);
    system("pause");
    return 0;
}
