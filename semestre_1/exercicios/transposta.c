/*Enunciado: Escreva um programa que receba do usuário as dimensões NUM_LIN e NUM_COL
(máximo 20) e os dados de uma matriz bidimensional, e imprima a matriz
transposta na tela.*/
#include <stdio.h>

int main() {
   int matriz[20][20];
   int matriz_transporta[20][20];//maximo de linhas e colunas
   int i, j, num_lim, num_col;
   
   //agora pedimos ao usuario quantas linhas e colunas ele vai querer
   scanf("%d %d",&num_lim, &num_col);
    
    //leitura
    for (i=0;i<num_lim;i++)
   {
       for(j=0;j<num_col;j++)
       scanf("%d", &matriz[i][j]);
   }
    
    //transposta
    for (i=0;i<num_lim;i++)
   {
       for(j=0;j<num_col;j++)
       matriz_transporta[j][i] = matriz[i][j];
   }
   
   //exibição
   for (i=0;i<num_col;i++)
   {
       for(j=0;j<num_lim;j++){
       printf("%d ", matriz_transporta[i][j]);}
       printf("\n");
   }
    return 0;
}