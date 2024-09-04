/*1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será
a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um 
programa na linguagem que desejar onde, informado um número, ele calcule a sequência de 
Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

#include <stdio.h>

int fibonacci(int num) {
    int a = 0, b = 1, c;
    
    if (num == a || num == b) {
        return 1;
    }

    c = a + b;
    while (c <= num) {
        if (c == num) {
            return 1;
        }
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}

int main() {
    int num;

    printf("Digite um número para verificar se ele pertence à sequência de Fibonacci: ");
    scanf("%d", &num);

    if (fibonacci(num)==1) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
