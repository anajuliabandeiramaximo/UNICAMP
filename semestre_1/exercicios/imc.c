/*Enunciado: Escreva um programa que contenha uma estrutura chamada
corpo, que possua os campos altura (tipo float), peso (tipo float) e
nome (tipo string). Este programa deve ler os dados de um
usuário, armazená-los em uma variável da estrutura corpo e, em
seguida, acessar estes valores armazenados, calcular o IMC (índice
de massa corporal, dado pela divisão entre peso e o quadrado da
altura) e exibir o resultado na tela.*/
#include <stdio.h>
#include <string.h>

int main() {
    float imc;
    struct corpo{
        float altura, peso;
        char nome[100];
    }Corpo;
    
    scanf("%f",&Corpo.altura);
    scanf("%f",&Corpo.peso);
    scanf("%s",Corpo.nome);
    
    imc = Corpo.peso / (Corpo.altura * Corpo.altura);
    
    printf("%.3f\n",imc);
    return 0;
}