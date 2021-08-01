#include <stdio.h>
#include <math.h>

int main (){
      float a, b, c, delta, x1, x2;
        printf ("soma ocorrencias dos digitos x em um inteiro de 4 digitos\n\n");
      printf ("\nInforme o valor de A:");
      scanf("%f", &a);
      printf ("\nInforme o valor de B:");
      scanf ("%f", &b);
      printf ("\nInforme o valor de C:");
      scanf("%f", &c);
      delta=(b*b)-(4*a*c);
        printf("\n\ndelta = %1.1f\n",delta);
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
       printf("\nos valores das raizes sao %1.1f e %1.1f\n\n",x1, x2);
        if ( x1 <0 && x2 < 0){
            printf("não existem raizes reais!");
            }
        else if ( x1 >0 && x2 > 0){
            printf("Existem duas raizes reais, que sao: %1.1f e %1.1f\n\n", x1, x2);
        }
        else if (x1 >0 && x2 <0){
            printf("Existe raiz real so em x1, que eh %1.1f\n\n", x1);
        }
        else {
            printf("Existe raiz real so em x2, que eh %1.1f\n\n", x2);
        }
        return 0;
}
