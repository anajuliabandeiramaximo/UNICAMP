/*Escreva uma função media que receba duas notas (tipo float) e
um caractere. Caso este caractere seja ‘A’
, a função deve retornar
a média aritmética das duas notas. Caso seja ‘B’
, a média geométrica (raiz quadrada do produto das duas notas) deve ser
retornada. Escreva também um programa que leia os valores das
duas notas e do caractere, chame a função media e imprima o
resultado na tela. A função media deve ser definida após a função
main().*/
#include<stdio.h>
#include<math.h>

float media(float n1, float n2, char tipo);

int main(){
    float n1,n2;
    char tipo;
    
    scanf("%c",&tipo);
    scanf("%f %f",&n1,&n2);
    printf("%.3f\n",media(n1,n2,tipo));
    
    return 0;
}

float media(float n1, float n2, char tipo) 
{
    float media,conta;
    
    if (tipo == 'A') //media aritmetica
    {
        media = (n1 + n2)/2;
    }
    else{
        conta = n1 * n2;
        media = sqrt(conta);
    }
    return media;
}