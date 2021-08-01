#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int valor1, valor2, digitado;


    printf("Gerando 2 valores aleatorios de dados e para quando a soma for 12:\n\n");

    srand(time(NULL));

    valor1 = rand () % 6 + 1;
    valor2 = rand () % 6 + 1;

    soma = valor1 + valor2;
