#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()
int main()
{
    int valor, digitado;


    printf("Gerando 1 valor aleatorio para vc tentar advinhar:\n\n");

    /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
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
