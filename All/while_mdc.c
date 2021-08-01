#include <stdio.h>
#include <stdlib.h>

main()
{
    int n1,n2,resto;

    printf("o programa ira calcula o MDC de dois numeros");
    printf("Digite dois numeros: ");
    scanf("%d%d", &n1, &n2);


              resto=n1%n2;
              while(resto!=0)
              {
                  n1    = n2;
                  n2    = resto;
                  resto = n1%n2;
                  printf("MDC = %d\n\n", n2);
              }
              system("pause");
}
