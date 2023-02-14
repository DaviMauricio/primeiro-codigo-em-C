//Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

#include <stdio.h>

int main() {
    int valor1, valor2, resultado;
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    resultado = valor1 + valor2;
    printf("SOMA = %d\n", resultado);
    return 0;
}
