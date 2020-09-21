#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

struct complexo
{
   float real;
   float imag;
};
comp* criarNumero(float real, float imag)
{
   comp* numComp = (comp*) malloc(sizeof(comp));
   if(numComp != NULL)
   {
     numComp->real = real;
     numComp->imag = imag;
   }
   printf("\n");
   imprimeComplexo(real,imag);
   return numComp;
}
void liberarNumero(comp* numComp)
{
   free(numComp);
}
void imprimeComplexo(float parteReal, float parteImag)
{
   if (parteImag == 0)
   {
      printf("%.2f", parteReal);
   }
   else if(parteImag == -1)
   {
      printf("%.2f - i", parteReal);
   }
   else if(parteImag < -1)
   {
      printf("%.2f %.2fi", parteReal, parteImag);
   }
   else
   {
      printf("%.2f + %.2fi", parteReal, parteImag);
   }
}
void somaComplexos(comp* cA, comp* cB)
{
   float somaReal, somaImag;
   somaReal = cA->real + cB->real;
   somaImag = cA->imag + cB->imag;
   printf("\n\nSoma = ");
   imprimeComplexo(somaReal,somaImag);
}
void subComplexos(comp* cA, comp* cB)
{
   float subImag = cA->imag - cB->imag;
   float subReal = cA->real - cB->real;
   printf("\n\nSubtracao = ");
   imprimeComplexo(subReal,subImag);
}
void multComplexos(comp* compA, comp* compB)
{
   float multReal = ((cA->real * cB->real) - (cA->imag * cB->imag));
   float multImag = (cA->imag * cB->real) + (cA->real * cB->imag);
   printf("\n\nMultiplicacao = ");
   imprimeComplexo(multReal,multImag);
}
void divComplexos(comp* cA, comp* cB)
{
   float re, im;
   float a = cA->real, b = cA->imag, c = cB->real, d = cB->imag;
   re = ((a*c + b*d)/(c*c + d*d));
   im = ((b*c - a*d)/(c*c + d*d));
   printf("\n\nDivisao = ");
   imprimeComplexo(re,im);
}
