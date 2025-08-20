/*Enunciado: Uma determinada loja comercializa 10 produtos diferentes. Escreva um
programa que receba a quantidade vendida e o valor unitário de cada produto e
os armazene em dois vetores. Após a leitura, o programa deve calcular o total
de produtos vendidos e o faturamento total a loja, e exibi-los na tela*/
#include <stdio.h>

int main() {
   int produtos[10];
   float valor[10];
   int conta=0, contProd=0;
   float lucro=0;
   
   for(conta=0;conta<10;conta++)
   {
       scanf("%d",&produtos[conta]);
       contProd = contProd + produtos[conta];
   }
   
   for(conta=0;conta<10;conta++)
   {
       scanf("%f",&valor[conta]);
       lucro = lucro + (produtos[conta] * valor[conta]);
   }
   
   printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n",lucro,contProd);
    return 0;
}