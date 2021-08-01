#include <stdio.h>
#include <locale.h>
int main () {
     float valorDigitado, raio, altura, base, altura_quadrado,area_quadrado,area_triangulo, altura_retangulo,base_retangulo, area_retangulo, area_circulo;

setlocale (LC_ALL,"");
printf ("Calculando a área de uma figura geométrica plana(círculo, triângulo,quadrado ou retângulo)!\n");
printf ("Se for um circulo, digite 1:\nSe for um triângulo, digite 2:\nSe for um quadrado, digite 3:\nSe for um retângulo, digite 4:\n");
scanf ("%f", &valorDigitado);
            if (valorDigitado == 1){
                printf("digite o raio do circulo: ");
                scanf("%f", &raio);
                area_circulo = 3,14159 * raio * 2;
                printf("A area desse circulo eh: %1.1f", area_circulo);
                }
             else if  (valorDigitado == 2){
                printf("digite o valor da altura do triangulo");
                scanf("%f", &altura);
                printf("digite o valor da base do triangulo");
                scanf("%f", &base);
                area_triangulo = altura * base / 2;
                printf("A area desse triangulo eh: %1.1f", area_triangulo);
            }
            else if (valorDigitado == 3){
                printf("digite o valor da altura do quadrado ou da sua base");
                scanf("%f", &altura_quadrado);
                area_quadrado = altura_quadrado * altura_quadrado;
                printf("A area desse quadrado eh: %1.1f", area_quadrado);
                }
            else if (valorDigitado == 4) {
                printf("digite o valor da altura do retangulo");
                scanf("%f", &altura_retangulo);
                printf("digite o valor da base do retangulo");
                scanf("%f", &base_retangulo);
                area_retangulo = altura_retangulo * base_retangulo;
                printf("A area desse triangulo eh: %1.1f", area_retangulo);
            }
return 0;
}
