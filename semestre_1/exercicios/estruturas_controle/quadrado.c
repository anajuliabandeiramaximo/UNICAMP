/*Programa que imprime o quadrado de todos os inteiros de 1 a 20, um por linha.*/
#include <stdio.h>
int main(){
	int cont=1, quadrado;
	while (cont<=20){
	    quadrado = cont*cont;
		printf("%d\n", quadrado);
		cont++;
	}
	return 0;
}
