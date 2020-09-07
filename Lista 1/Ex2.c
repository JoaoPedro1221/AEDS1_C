//2. Crie um registro (struct) ALUNO que contenha os seguintes campos:
//int m a t ri c ul a ;
//char nome [ 5 0 ] ;
//int di a \_nasc ;
//int mes\_nasc ;
//int ano \_nasc ;
//f l o a t nota ;
//Escreva um programa que leia o número n de alunos a serem cadastrados. Em seguida, um vetor V com n posições deve ser alocado dinamicamente usando uma função que retorna um ponteiro do tipo ALUNO. O programa deve preencher o vetor V e imprimir o registro dos alunos aprovados, isto é, com nota maior ou igual a 6,0. Para executar tais tarefas devem ser criadas funções para:
//(a) Alocar memória dinamicamente para um vetor do tipo ALUNO.
//(b) Preencher o vetor de alunos.
//(c) Imprimir o vetor de alunos.
//(d) Preencher o registro de um aluno.
//(e) Imprimir o registro de um aluno.

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int matricula;
  char nome[50];
  int dia;
  int mes;
  int ano;
  float nota;
}

ALUNO;
void alocarMemoria(ALUNO *v, int n);
void preencherVetorAluno(ALUNO *v, int n);
void imprimirVetorAluno(ALUNO *v, int n);
void preencherRegistroAluno(ALUNO *v, int n, int i);
void imprimirRegistroAluno(ALUNO *v, int n);

int main(void)
{
  int n, cont = 0;
  ALUNO *v, *aprovados;
  printf("\nNumero de alunos a serem cadastrados: ");
  scanf("%d", &n);
  alocarMemoria(v, n);
  preencherVetorAluno(v, n);
  system("cls");
  imprimirVetorAluno(v, n);
  imprimirRegistroAluno(v, n);
}

void alocarMemoria(ALUNO *v, int n)
  {
  v = (ALUNO*) malloc(n * sizeof(ALUNO));
  if(v == NULL)
    {
    printf("\nMemoria Insuficiente");
    }
  }

void preencherVetorAluno(ALUNO *v, int n)
  {
  for(int i = 0; i < n; i++)
    {
    printf("\n\n-------------------------------\n");
    printf("\n\nDados do Aluno %dº:\n",i+1);
    preencherRegistroAluno(v, n, i);
    }
  }

void imprimirVetorAluno(ALUNO *v, int n)
{
  printf("\n\n-------------------------------\n");
  printf("\n\nDADOS DOS ALUNOS\n");
  for(int i = 0; i < n; i++)
  {
    printf("\n\nALUNO NUM %d",i+1);
    printf("\nMatricula: %d", v[i].matricula);
    printf("\nNome: %s", v[i].nome);
    printf("\nNascimento: %d/%d/%d",v[i].dia, v[i].mes, v[i].ano);
    printf("\nNota: %.2f\n", v[i].nota);
  }

}

void preencherRegistroAluno(ALUNO *v, int n, int i)
    {
    printf("\nMatricula: ");
    scanf("%d", &v[i].matricula);

    printf("Nome: ");
    scanf("%s", &v[i].nome);

    printf("Dia de Nascimento: ");
    scanf("%d", &v[i].dia);

    printf("Mes de Nascimento: ");
    scanf("%d", &v[i].mes);

    printf("Ano de Nascimento: ");
    scanf("%d", &v[i].ano);

    printf("A nota do Aluno: ");
    scanf("%f", &v[i].nota);
    }

void imprimirRegistroAluno(ALUNO *v, int n)
{
  printf("\n\n-------------------------------\n");
  printf("\n\nALUNOS APROVADOS:\n");
  for(int i = 0; i < n; i++)
  {
    if(v[i].nota >= 6)
    {
      printf("\nALUNO NUM %d",i+1);
      printf("\nMatricula: %d", v[i].matricula);
      printf("\nNome do Aluno: %s", v[i].nome);
      printf("\nData de Nascimento: %d/%d/%d",v[i].dia, v[i].mes, v[i].ano);
      printf("\nNota do Aluno: %.2f\n", v[i].nota);
    }
  }
  printf("\n\n-------------------------------\n");
  printf("\n\nALUNOS REPROVADOS\n");
  for(int i = 0; i < n; i++)
  {
    if(v[i].nota < 6)
    {
      printf("\nALUNO NUM %d foi REPROVADO com nota: ",i+1);
      printf("%.2f\n", v[i].nota);
    }
  }
}
