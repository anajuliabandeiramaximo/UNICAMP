/*Enunciado: Escreva um programa que, utilizando uma estrutura,
leia as coordenadas de dois retângulos e indique se o segundo
retângulo está totalmente contido no primeiro retângulo ou não.*/
#include <stdio.h>
#include <math.h>

int main() {
    struct retangulo1{ //retangulo original
        float x1, y1, x2, y2;
    }Retangulo1;
    struct retangulo2{ //retangulo original
        float x1, y1, x2, y2;
    }Retangulo2;
    
    
    
    scanf("%f %f",&Retangulo1.x1,&Retangulo1.y1);
    scanf("%f %f",&Retangulo1.x2,&Retangulo1.y2);
    scanf("%f %f",&Retangulo2.x1,&Retangulo2.y1);
    scanf("%f %f",&Retangulo2.x2,&Retangulo2.y2);
    
    /*Obs: Quando você diminui o valor do x o ponto vai pra BAIXO, então para estar contido, o retangulo 2 tem que ter um x maior ou igual ao retangulo "original"*/
    if ((Retangulo2.x1 >= Retangulo1.x1) && (Retangulo2.y1 >= Retangulo1.y1) && (Retangulo2.x2 <= Retangulo1.x2) && (Retangulo2.y2 <= Retangulo1.y2))
    {
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else
    {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
    return 0;
}