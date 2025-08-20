/*Programa que calcula o número de combinações de n objetos tomados s de cada vez solicitados ao usuário*/
#include <stdio.h>
int main(){
	int n, s,ns,combinacao;
	long fatorialN, fatorialS, fatorialNS;
		scanf("%d", &n);
		scanf("%d", &s);
		//Calculo do fatorial de n e s e n-s
		fatorialN = 1;
		fatorialS = 1;
		fatorialNS = 1;
		ns= n-s;
		while(n >1)
			fatorialN *= n--;
		while(s >1)
			fatorialS *= s--;
		while(ns >1)
			fatorialNS *= ns--;
		
		//Cálculo da combinação
		combinacao = fatorialN / (fatorialS*fatorialNS);
	printf("%d\n",combinacao);
	
	return 0;
}