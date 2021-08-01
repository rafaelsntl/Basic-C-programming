#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
int num, total, n, quantidade;
printf("o programa irá calcular a soma de 10 inteiros");
printf("determine o valor de digitor que deseja calcular");
scanf("%d", &quantidade);
for(n = 1; n < quantidade; n ++){
printf("\ndigite %d° o valor desejado\n",n);
scanf("%d",&num);
num = total;
total = num + total;
}
printf("o total calculado é: %d", total);
return 0;
}
