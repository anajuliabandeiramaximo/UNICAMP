/*Enunciado: Escreva um programa que receba o valor do raio de uma esfera e
retorne o seu volume. O cálculo do volume da esfera deve ser
feito em uma função chamada volume_esfera definida antes da
função main().*/
#include<stdio.h>

float volume_esfera(float raio) 
{
    float volume;
    volume= (4.0/3.0)*(3.14159*(raio*raio*raio));
    return volume;
}

int main(){
    float raio;
    scanf("%f",&raio);
    printf("%.2f\n", volume_esfera(raio));
    
    return 0;
}