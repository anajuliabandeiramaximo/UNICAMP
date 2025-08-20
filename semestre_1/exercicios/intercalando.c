/*Enunciado: Escreva um programa que carregue dois vetores com 10 valores inteiros cada um e
mostre o vetor resultante da intercalação destes dois vetores*/
#include <stdio.h>

int main() {
    int a[10], b[10];
    int conta;
    
    for(conta=0;conta<10;conta++)
    {
        scanf("%d",&a[conta]);
    }
    for(conta=0;conta<10;conta++)
    {
        scanf("%d",&b[conta]);
    }
    
    for(conta=0;conta<10;conta++)
    {
        printf("%d|%d|",a[conta],b[conta]);
    }
    printf("\n");
    return 0;
}