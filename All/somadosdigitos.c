#include <stdio.h>
#include <locale.h>

int main()
{
    int contador;
    setlocale(LC_ALL, "");
    printf("o programa iré repetir 10 vezes \"eu funciono\"\n");

    for (contador = 1; contador <= 10; contador++){
        printf("eu funciono\n");
   } return 0;
}
