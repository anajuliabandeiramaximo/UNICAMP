/*Enunciado: Escreva um programa que leia uma string qualquer (máximo 80 caracteres) e
imprima na tela a sua versão espelhada, ou seja, a mesma string mas com a
ordem dos caracteres invertida .*/
#include<stdio.h>
#include<string.h>

int main() {
    char str[80];
    int tamanho, i;

    fgets(str, 80, stdin); //leitura da string

    /*se o final da string tiver um \n vai colocar um /0 no lugar, tem o -1 pq ali onde esta o \n pq ele tbm conta o \0 */
    if (str[tamanho = strlen(str) - 1] == '\n') {
        str[tamanho] = '\0';
    }

    //exibicao, tamanho -1 por causa do indice que começa em 0
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}