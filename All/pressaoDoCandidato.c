/*Algoritmo
1-Solicitar um inteiro de quatro d�gitos
2-Separar os quatro d�gitos, usando opera��es aritm�ticas
3-Compor o inteiro e os digitos invertidos, usando opera��es
4-Mostrar o inteiro com os d�gitos invertidos
*/
#include <stdio.h>
#include <locale.h>

int main () {
 int inteiro, milhar, centena, dezena, unidade, inteiro_invertido;

 setlocale (LC_ALL, "");
 printf ("Mostra um inteiro de 4 digitos com os digitos invertidos\n");
printf ("Informe um inteiro de 4 digitos:");
scanf ("%d", &inteiro);
unidade % 10 ;
dezena = inteiro / 10 % 10;
centena = inteiro / 100 % 10;
milhar = inteiro /  1000;
inteiro_invertido = unidade * 1000 + dezena * 100 + centena * 10 + milhar;
printf ("Inteiro com os 4 d�gitos invertidos �: %d\n", inteiro_invertido);
return 0;
}
