#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include<time.h>//necess�rio p/ fun��o time()
int main()
{
    int valor, digitado;


    printf("Gerando 1 valor aleatorio para vc tentar advinhar:\n\n");

    /* srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
    com o valor da fun��o time(NULL). Este por sua vez, � calculado
    como sendo o total de segundos passados desde 1 de janeiro de 1970
    at� a data atual.
    Desta forma, a cada execu��o o valor da "semente" ser� diferente.
    */
    srand(time(NULL));


    printf("digite sua primeira tentativa\n\n");
    scanf ("%d", &digitado);
    valor = rand () % 100;
    while (valor != digitado)
    {
        if (valor > digitado)
        {
            printf("\naumente um pouco seu palpite!\n");
        }
        else
        {
            printf("\ndiminua um pouco seu palpite!\n");
        }
        printf("digite seu novo palpite:\n");
        scanf ("%d", &digitado);
    }
    printf("\n\nvoce acertou! o valor era: %d\n\n",valor);

    return 0;
}
