/*Escreva um programa que defina uma estrutura chamada “Ponto”,
que deverá conter as coordenadas x e y de quaisquer pontos no
espaço bidimensional, leia as coordenadas de dois pontos
quaisquer do teclado, calcule a distância euclidiana entre eles
 e indique se eles são iguais. 
 Dado que quando trabalhamos com pontos flutuantes não faz muito sentido
buscarmos igualdade exata, considere que dois pontos são iguais
quando a distância euclidiana entre eles for inferior a 0,0000001.*/
#include <stdio.h>
#include <math.h>

int main() {
    float d=0;
    struct ponto{
        float x1, y1, x2, y2;
    }Ponto;
    scanf("%f %f",&Ponto.x1,&Ponto.y1);
    scanf("%f %f",&Ponto.x2,&Ponto.y2);
    
    d = sqrt((Ponto.x2 - Ponto.x1)*(Ponto.x2 - Ponto.x1)+(Ponto.y2 - Ponto.y1)*(Ponto.y2 - Ponto.y1));
    
    if(d < 0.0000001) { /*nao toleramos o erro negativo pq sempre vai ser positivo por causa da potencia*/
        printf("os pontos sao iguais\n");
    }
    else{
        printf("os pontos nao sao iguais\n");
    }
    
    return 0;
}