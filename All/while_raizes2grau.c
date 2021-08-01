#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{

      int opcao;
      float a,b,c,delta,x1,x2;

      printf("Digite o valor de a: \n");
      scanf("%f",&a);
      printf("\n\nDigite o valor de b: \n");
      scanf("%f",&b);
      printf("\n\nDigite o valor de c: \n");
      scanf("%f",&c);

      printf("Sua equacao: %1.0fx^2 + %1.0fx + %1.0f = 0\n", a, b, c);

      delta=(b*b)-(4*a*c);

      printf("\n\n delta = %1.1f",delta);

             if (delta<0)
             {
               printf("\nNao e possivel extrair a raiz deste numero\n\n");
               system("pause");
               exit(1);

             }
              else
               {
                  x1 = ((-b) + sqrt(delta))/(2*(a));
                  x2 = ((-b) - sqrt(delta))/(2*(a));
               }

    printf("O resultado da equacao \n x1: %1.1f\n x2: %1.1f\n",x1,x2);

    system("pause");
}
