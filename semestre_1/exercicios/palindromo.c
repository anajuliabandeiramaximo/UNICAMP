/*Faça um programa que teste se uma palavra é um palíndromo, ou seja, se ela
pode ser lida da mesma forma tanto na ordem correta quanto na ordem
invertida.
Exemplo: arara, ovo, omo*/
#include<stdio.h>
#include<string.h>

int main() {
    char str[80],palindromo[80];
    char minuscula_str, minuscula_pal;
    int tamanho, i,cont=0;

    fgets(str, 80, stdin);
    if (str[tamanho = strlen(str) - 1] == '\n') {
        str[tamanho] = '\0';
    }

    /*inverte a string, ex: se a string for ab, o tamanho vai ser 2 entao vai subtrair ficando 1 - 0=1, pegando o caracter b e assim por diante*/
    for (i = 0; i < tamanho; i++) {
        palindromo[i] = str[tamanho - 1 - i];
    }
    
    for (i = 0; i < tamanho; i++) {
        /*atribuindo a variavel o caracter do vetor correspondente a i*/
        minuscula_str = str[i];
        minuscula_pal = palindromo[i];
        
        /*primeiro vamos fazer ficar minuscula e depois comparamos o caracter e se eles forem igauis contamos +1*/
        if ( minuscula_str >= 'A' && minuscula_str <= 'Z') 
        {
            minuscula_str = minuscula_str + 32;
        }
        if ( minuscula_pal >= 'A' && minuscula_pal <= 'Z') 
        {
            minuscula_pal = minuscula_pal + 32;
        }
        
        if (minuscula_str == minuscula_pal)
        {cont = cont + 1;}
    }

    if(cont == tamanho)
    {
        printf("Esta palavra e um palindromo\n");
    }
    else
    {
        printf("Esta palavra nao e um palindromo\n");
    }
    return 0;
}