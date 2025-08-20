/*Enunciado: Escreva um programa que leia 20 notas, armazene-as em um vetor e então diga
se uma determinada nota x digitada pelo usuário existe no vetor. O programa
deve repetir o procedimento de leitura de x e busca de x no vetor até que o
usuário digite um valor negativo.*/
#include<stdio.h>
int main(){
    float notas[20];
    float x;
    int conta=0,i=0;

    for(conta=0;conta<20;conta++)
    {
        scanf("%f",&notas[conta]);
    }
    
   while (1){
        scanf("%f",&x);
        if (x<0)
        break;
        
       i=0;
       while((notas[i] != x) && (i < 20)){
           i++;
       }
       if (i < 20){
           printf("existe\n");}
       else{
       printf("nao existe\n");}

        }
        return 0;
    }
/*Desenvolvido por: Ana Julia bandeira Maximo, RA:219528*/    