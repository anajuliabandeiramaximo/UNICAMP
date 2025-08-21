#include <stdio.h>

int main() {
    float n1,n2,resultado;
    char operacao;
    scanf("%f%c%f", &n1, &operacao, &n2);

if (operacao == '+'){
    resultado = n1 + n2;
    printf("%.3f+%.3f=%.3f\n",n1,n2,resultado);
}
if (operacao == '-'){
    resultado = n1 - n2;
    printf("%.3f-%.3f=%.3f\n",n1,n2,resultado);
}
if (operacao == '*'){
    resultado = n1 * n2;
    printf("%.3f*%.3f=%.3f\n",n1,n2,resultado);
}
if (operacao == '/'){
    resultado = n1 / n2;
    printf("%.3f/%.3f=%.3f\n",n1,n2,resultado);
}
if (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/'){
    printf("Operador invalido\n");
}
    return 0;
}
