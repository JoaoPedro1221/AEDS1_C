#include <stdio.h>
#include <stdlib.h>

void inVetor(int l, int c, int *v);
void outVetor(int l, int c, int *v);
void inMatriz(int l, int c, int *v, int **m);
void outMatriz(int l, int c, int *v, int **m);

int main()
{
  int l, c;
  int *v, **m;
  printf("\n-------------------------------\n");
  printf("\nNumero de linhas:\n");
  scanf("%d", &l);
  printf("\nNumero de colunas:\n");
  scanf("%d", &c);
  printf("\n-------------------------------\n");

  v = (int*) malloc((l*c) * sizeof(int));
  m = (int**) malloc(l * sizeof(int));

  for(int i = 0; i < c; i++)
    {
    m[i] = (int*) malloc(c * sizeof(int));
    }

  inVetor(l,c,v);
  printf("\nVetor: ");
  outVetor(l,c,v);
  inMatriz(l, c, v, m);
  printf("\n-------------------------------\n");
  outMatriz(l, c, v, m);
  printf("\n-------------------------------\n");
  
  return 0;
}

void inVetor(int l, int c, int *v)
{
  printf("\nValores dos Vetores: \n");
  for(int i = 0; i < l*c; i++)
    {
    scanf("%d", &v[i]);
    }
}

void outVetor(int l, int c, int *v)
{
  for (int i = 0; i < l*c; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");
}

void inMatriz(int l, int c, int *v, int **m)
{
  for (int i = 0; i < l; i++)
    {
    for (int j = 0; j < c; j++)
      {
      m[i][j] = v[i*c+j];
      }
  }
}

void outMatriz(int l, int c, int *v, int **m)
{
  printf("\nMatriz:\n");
  for (int i = 0; i < l; i++)
    {
    for (int j = 0; j < c; j++)
      {
      printf("%d ", m[i][j]);
      }
    printf("\n");
    }
}
