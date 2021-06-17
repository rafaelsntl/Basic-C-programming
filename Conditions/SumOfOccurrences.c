#include <stdio.h>
#include <locale.h>

int main (){
      int inteiro, x, unidade, dezena, centena, milhar, somador;

      setlocale (LC_ALL,"");
      printf ("Soma ocorrencias do digito x em um inteiro de 4 digitos:\n\n");
      printf ("Informe um inteiro de 4 digitos:\n");
      scanf ("%d", &inteiro);
      printf ("Informe o valor do digito x: ");
      scanf ("%d", &x) ;
      unidade = inteiro % 10;
      dezena = inteiro / 10 % 10;
      centena = inteiro / 100 % 10;
      milhar = inteiro / 1000;
      somador = 0;
      if (unidade == x)
          somador = somador + x;
      if (dezena == x)
          somador = somador + x;
      if (centena == x)
          somador = somador + x;
      if (milhar == x)
          somador = somador + x;
      printf ("A soma das ocorrências de x no inteiro é %d", somador);
return 0;
}
