#include <stdio.h>
#include <locale.h>

int main()
{
    int pessoa;
    float peso, altura, imc;

    setlocale(LC_ALL, "");
    printf("calcula seu imc e mostra sua classificação:\n\n");

    for (pessoa = 1; pessoa <=5; pessoa ++)
    {
        printf("\n\ndigite o peso e a altura da %.1f° pessoa (separados por espaço):\n", pessoa);
        scanf("%f %f", &peso, &altura);

        imc = peso / (altura * altura);

        if (imc < 17)
            printf("\nseu imc é: %f, e você está muito abaixo do peso\n", imc);

        else if (imc < 18,5)
            printf("\nseu imc é: %f, e você está abaixo do peso\n", imc);

        else if (imc <= 18.6 )

            printf("\nseu imc é: %f, e você está com o peso normal", imc);

        else if (imc <= 25 )

            printf("\nseu imc é: %f, e você está com sobrepeso", imc);

        else if (imc <= 30 )

            printf("\nseu imc é: %f, e você está com obesidade de grau 1", imc);

        else if (imc <= 35 )

            printf("\nseu imc é: %f, e você está com obesidade de grau 2", imc);

        else
            printf("\nseu imc é: %f, e você está com obesidade de grau 3", imc);
    }
    return 0;
}
