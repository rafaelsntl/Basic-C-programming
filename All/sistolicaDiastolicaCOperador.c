#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "");
    int psistolica, pdiastolica;

    printf ("\no programa  informa se a pressao eh ou nao ideal:\n");
    printf ("\ninforme a pressao arterial sistolica:\n");
    scanf ("%d", &psistolica);
    printf ("\ninforme a pressao arterial diastolica:\n");
    scanf ("%d", &pdiastolica);
    printf("%s\n", psistolica == 120 && pdiastolica == 80 ? "Você é um candidato ideal" : "Você não é um candidato ideal");
    return 0;
}
