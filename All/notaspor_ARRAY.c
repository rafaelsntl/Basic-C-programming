/* Controle de notas de alunos, usando uma matriz */
#include <stdio.h>
#include <locale.h>
#define ALUNOS 3
#define EXAMES 4

int minimo(const int[][EXAMES], int, int);
int maximo(const int[][EXAMES], int, int);
double media(const int[], int);
void imprimeArray(const int[][EXAMES], int, int);

int main() {
int aluno;
const int notas[ALUNOS][EXAMES] = {{77, 68, 86, 73}, {96, 87, 89, 78},
{70, 90, 86, 81}};
setlocale(LC_ALL, "");
printf("O array é:\n");
imprimeArray(notas, ALUNOS, EXAMES);
printf("\n\nNota menor: %d\nNota maior: %d\n",
minimo(notas, ALUNOS, EXAMES), maximo(notas, ALUNOS, EXAMES));
for (aluno = 0; aluno <= ALUNOS - 1; aluno++)
printf("\Nota média do aluno %d %.2f\n", aluno,
media(notas[aluno], EXAMES));
return 0;
}
/* Determinação da menor nota */
int minimo(const int notas[][EXAMES],int pupilos, int testes) {
int i, j, menorNota = 100;

for (i = 0; i <= pupilos - 1; i++)
for (j = 0; j <= testes - 1; j++)
if (notas[i][j] < menorNota)
menorNota = notas[i][j];
return menorNota;
}
/* Determinação da nota máxima */
int maximo(const int notas[][EXAMES], int pupilos, int testes) {
int i, j, maiorNota = 0;

for (i = 0; i <= pupilos - 1; i++)
for (j = 0; j <= testes - 1; j++)
if (notas[i][j] > maiorNota)
maiorNota = notas[i][j];
return maiorNota;
}
/* Determinação da nota média para um aluno */
double media(const int notas[], int testes) {
int i, total = 0;

for (i = 0; i <= testes - 1; i++)
total += notas[i];
return (double)total / testes;
}
/* Impressão do array */
void imprimeArray(const int notas[][EXAMES], int pupilos, int testes) {
int i, j;

printf(" Notas\n");
printf(" [0] [1] [2] [3]");
for (i = 0; i <= pupilos - 1; i++) {
printf("\naluno[%d] ", i);
for (j = 0; j <= testes - 1; j++)
printf("%-5d", notas[i][j]);
}
}
