typedef struct complexo comp;
comp* criarNumero(float real, float imag);
void liberarNumero(comp* numComp);
void imprimeComplexo(float parteReal, float parteImag);
void somaComplexos(comp* cA, comp* cB);
void subComplexos(comp* cA, comp* cB);
void multComplexos(comp* cA, comp* cB);
void divComplexos(comp* cA, comp* cB);
