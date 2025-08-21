/*Escreva um programa que simule o funcionamento de uma
calculadora com cinco operações (+, -, *, / e ^). Este programa
deverá ler os operandos e o operador (no formato numero
operador numero) e exibir o resultado da operação. O operador ^
corresponde ao operador “elevado a” (potência). Cada operador
deve ser implementado em uma função própria, definida após o
main().*/

#include<stdio.h>
#include<math.h>

float soma(float op1, float op2);
float sub(float op1, float op2);
float mult(float op1, float op2);
float divi(float op1, float op2);
float pot(float op1, float op2);

int main(){
    float op1,op2;
    char operacao;
    
    scanf("%f%c%f",&op1,&operacao,&op2);
    
    if (operacao == '+'){
        printf("%.3f\n",soma(op1,op2));
    }
    if (operacao == '-'){
        printf("%.3f\n",sub(op1,op2));
    }
     if (operacao == '*'){
        printf("%.3f\n",mult(op1,op2));
    }
     if (operacao == '/'){
        printf("%.3f\n",divi(op1,op2));
    }
     if (operacao == '^'){
        printf("%.3f\n",pot(op1,op2));
    }
    
    
    return 0;
}

float soma(float op1, float op2)
{
    float R;
    R = op1 + op2;
    return R;
}
float sub(float op1, float op2)
{
    float R;
    R = op1 - op2;
    return R;
}
float mult(float op1, float op2)
{
    float R;
    R = op1 * op2;
    return R;
}
float divi(float op1, float op2)
{
    float R;
    R = op1 / op2;
    return R;
}
float pot(float op1, float op2)
{
    float R;
    R = pow(op1, op2);
    return R;
}