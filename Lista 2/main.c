#include <stdio.h>
#include "complex.h"

int main(void)
{
   Complexo *numComp, *numComp2;
   printf("\nNumeros Complexos: \n");
   numComp = criarNumero(3,-1);
   numComp2 = criarNumero(1,-2);
   somaComplexos(numComp, numComp2);
   subComplexos(numComp, numComp2);
   multComplexos(numComp, numComp2);
   divComplexos(numComp, numComp2);
   liberarNumero(numComp);
   liberarNumero(numComp2);
}
