#include <stdio.h>
#include <locale.h>

int main () {
    int ;

    setlocale (LC_ALL,"");
    printf ("recebe uma data, como um inteiro, no formato �ddmmaaaa� e mostra por extenso:\n\n");
    printf ("informe a data: ");
    scanf ("%d", &codigo);

unidade = codigo % 10;
    dezena = codigo / 10 % 10;
    centena = codigo / 100 % 10;
    milhar = codigo / 1000 % 10;
    dezena_de_milhar = codigo / 10000 % 10;
    centena_de_milhar = codigo / 100000;

    if(centena > 0){ //Caso exista centenas, subitrair a centena antes de checar as dezenas
        dezena =  (digito - (centena * 100)) / 10 ;
    }else{
        dezena = digito / 10;
    }

    unidade = digito % 10;

    switch (centena){
    case 1:
    printf("Centesimo");
    break;
    case 2:
    printf("Ducentesimo");
    break;
    case 3:
    printf("Tricentesimo");
    break;
    case 4:
    printf("Quadrigentesimo");
    break;
    case 5:
    printf("Quingentesimo");
    break;
    case 6:
    printf("Seiscentesimo");
    break;
    case 7:
    printf("Septigentesimo");
    break;
    case 8:
    printf("Octigentesimo");
    break;
    case 9:
    printf("Nongentesimo");
    break;
    default:
    printf(" ");
    break;
    }

printf (" ");
switch (dezena){
    case 1:
    printf ("d�cimo");
    break;
    case 2:
    printf ("vig�simo");
    break;
    case 3:
    printf ("trig�simo");
    break;
    case 4:
    printf ("quadrag�simo");
    break;
    case 5:
    printf ("quinquag�simo");
    break;
    case 6:
    printf ("sexag�simo");
    break;
    case 7:
    printf ("septuag�simo");
    break;
    case 8:
    printf ("octog�simo");
    break;
    case 9:
    printf ("nonag�simo");
    break;
    default:
    printf("");
    break; }


printf (" ");

switch (unidade){
    case 1:
    printf ("primeiro");
    break;
    case 2:
    printf ("segundo");
    break;
    case 3:
    printf ("terceiro");
    break;
    case 4:
    printf ("quarto");
    break;
    case 5:
    printf ("quinto");
    break;
    case 6:
    printf ("sexto");
    break;
    case 7:
    printf ("s�timo");
    break;
    case 8:
    printf ("oitavo");
    break;
    case 9:
    printf ("nono");
    break;
    default:
    printf("");
    break;
}
return 0;
}
