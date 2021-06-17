#include <stdio.h>
#include <string.h>


char* check_cpf(char cpf[], short* nums)
{
	short nums_multiplicados[11];
	short nums_originais[11];
	int numeros = 0;
	int multiplicador = 10;
	int soma = 0;
	int resto = 0;
	int digito = 0;
	for(int i = 0; i < 9; i++)
	{
		numeros = 0;
		if(cpf[i] >= '0' && cpf[i] <= '9')
		{
			nums_originais[i] = cpf[i] - '0';
			nums_multiplicados[i] = nums_originais[i];
			nums_multiplicados[i] = nums_multiplicados[i] * multiplicador--;
		}
		soma += nums_multiplicados[i];
	}
	resto = soma % 11;
	if(resto != 0 && resto != 1)
	{
		digito = 11 - resto;
	}

	nums_originais[9] = digito;
	cpf[9] = '0' + digito;
	multiplicador = 11;
	soma = 0;
	resto = 0;
	digito = 0;
	for(int i = 0; i < 10; i++)
	{

		nums_multiplicados[i] = nums_originais[i];
		nums_multiplicados[i] = nums_multiplicados[i] * multiplicador--;
		soma += nums_multiplicados[i];
	}
	resto = soma % 11;
	if(resto != 0 && resto != 1)
	{
		digito = 11 - resto;
	}
	nums_originais[10] = digito;
	cpf[10] = '0' + digito;
	for(int i = 0; i < 11; i++)
	{
		nums[i] = nums_originais[i];
	}
	return cpf;
}

void cpf_lugar(char cpf[])
{
	switch(cpf[8])
	{
	case '0':
		printf ("Rio Grande do Sul\n");
		break;
	case '1':
		printf("Distrito Federal, Goi s, Mato Grosso, Mato Grosso do Sul e Tocantins\n");
		break;
	case '2':
		printf("Amazonas, Par , Roraima, Amap , Acre e Rond“nia\n");
		break;
	case '3':
		printf("Cear , MaranhÆo e Piaui\n");
		break;
	case '4':
		printf("Para¡ba, Pernambuco, Alagoas e Rio Grande do Norte\n");;
		break;
	case '5':
		printf("Bahia e Sergipe\n");
		break;
	case '6':
		printf("Minas Gerais\n");
		break;
	case '7':
		printf("Rio de Janeiro e Esp¡rito Santo\n");
		break;
	case '8':
		printf("SÆo Paulo\n");
		break;
	case '9':
		printf("Paran  e Santa Catarina\n");
		break;
	}
}

//078539806-63 cpf falso para testes

int main(int argc, char *argv[])
{
	short num_cpf[11];
	char cpf[11];
	strcpy(cpf, "078539806");
	printf(check_cpf(cpf, num_cpf));
	return 0;
}
