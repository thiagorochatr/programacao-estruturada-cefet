#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

float calc(float a, float b, char c) {
    float x;
    if(c == '+') {
        x = a+b;
    } else if(c == '-') {
        x = a-b;
    } else if(c == '*' || c == 'x' || c == 'X') {
        x = a*b;
    } else {
        x = a/b;
    }
    return x;
}

main() {
    float a, b;
    char c;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o operador: ");
    scanf("\n");
    c = getchar();
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    if(c == '*' || c == 'x' || c == 'X' || c == '/' || c == ':' || c == '-' || c == '+') {
        printf("%f", calc(a,b,c));
    } else {
        printf("O operador digitado nao e valido.");
    }
}
