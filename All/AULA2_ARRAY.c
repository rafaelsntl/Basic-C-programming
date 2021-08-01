#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main (){

    setlocale(LC_ALL, "");
    int numeros [TAM] ;
    int i, aux, contador;

    printf("entre com dez numeros\n\n");
    for (i = 0; i < TAM ; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Ordem atual dos itens no array:\n");
    for (i = 0; i < TAM ; i++) {
        printf("%4d\n",numeros [i]);
    }
    // algoritmo Bubblesort
    for (contador = 1; contador < TAM; contador ++){
        for (i= 0; i < TAM - 1; i++){
            if (numeros [i] > numeros [i + 1]){
                aux = numeros [i];
                numeros [i] = numeros [i + 1];
                numeros [i + 1] = aux;
            }
        }
    }

    printf("Ordem crescente dos itens no array:\n");
        for (i=0; i < TAM; i++){
            printf("%4.d", numeros [i]);
        }
return 0;

}
