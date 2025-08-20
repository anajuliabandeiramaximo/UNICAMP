
/*programa que lê dez números inteiros e imprima na tela quantos destes números são pares e quantos são ímpares.*/
#include <stdio.h>
int main(){
	int conta,n,contpar=0,contimpar=0;

	for (conta=0;conta<10;conta++)
	{
		scanf("%d",&n);
		if(n%2==0){
	    contpar=contpar+1;
        }
        else{
	    contimpar=contimpar+1;
        }
	}
	
	printf("%d pares, %d impares\n",contpar,contimpar);
	return 0;
}