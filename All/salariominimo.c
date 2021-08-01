#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "");
    int salario, salario_minimo, salario_reajustado, salario_minimo_reajustado;

    printf ("\no programa  informa o acressimo no salario:\n");
     printf ("\ninforme o valor do salário minimo:\n");
    scanf ("%d", &salario_minimo);
    printf ("\ninforme seu salario:\n");
    scanf ("%d", &salario);
    if (salario == salario_minimo) {
       salario_reajustado = salario + salario * (salario == salario_minimo ? 10 : 4.5)/100;
    }
    else if (salario != salario_minimo){
        salario_reajustado = salario * (salario == salario_minimo ?  1.1 : 1.045);
    }

    salario_minimo_reajustado = salario + (salario*10/100);

if (salario_reajustado<salario_minimo_reajustado){
    salario_reajustado = salario_minimo_reajustado;
}
    printf("salario = %d", salario_reajustado);
    return 0;
}
