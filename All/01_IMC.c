#include <stdio.h>
#include <locale.h>

int main()
{
    int pessoa;
    float peso, altura, imc;

    setlocale(LC_ALL, "");
    printf("calcula seu imc e mostra sua classifica��o:\n\n");

    for (pessoa = 1; pessoa <=5; pessoa ++)
    {
        printf("\n\ndigite o peso e a altura da %.1f� pessoa (separados por espa�o):\n", pessoa);
        scanf("%f %f", &peso, &altura);

        imc = peso / (altura * altura);

        if (imc < 17)
            printf("\nseu imc �: %f, e voc� est� muito abaixo do peso\n", imc);

        else if (imc < 18,5)
            printf("\nseu imc �: %f, e voc� est� abaixo do peso\n", imc);

        else if (imc <= 18.6 )

            printf("\nseu imc �: %f, e voc� est� com o peso normal", imc);

        else if (imc <= 25 )

            printf("\nseu imc �: %f, e voc� est� com sobrepeso", imc);

        else if (imc <= 30 )

            printf("\nseu imc �: %f, e voc� est� com obesidade de grau 1", imc);

        else if (imc <= 35 )

            printf("\nseu imc �: %f, e voc� est� com obesidade de grau 2", imc);

        else
            printf("\nseu imc �: %f, e voc� est� com obesidade de grau 3", imc);
    }
    return 0;
}
