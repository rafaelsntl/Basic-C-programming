#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
int inteiro, invertido = 0, digito_a_direira;
printf("o programa soma inteiros positivos e para quando encontra negativo ou zero\n\n");
printf("determine o valor que deseja separar\n");
scanf("%d", &inteiro);

while ( inteiro > 0){
        invertido = invertido * 10 + inteiro % 10;
        inteiro = inteiro / 10;}
        printf("\n");
        while (invertido > 0) {
            digito_a_direira = invertido %10;
            printf("%d ", digito_a_direira);
            invertido = invertido / 10;
        }
        printf("\n\n");
return 0;
}
