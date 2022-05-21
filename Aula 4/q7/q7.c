#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int maiusculaMinuscula(char a) {
    int i = 0;
    if(a >= 'a' && a<= 'z') {
        i =1;
    }
    return i;
}

int letra(char a) {
    int i = 0;
    if(a >= 'a' && a<= 'z' || a >= 'A' && a<= 'Z') {
        i =1;
    }
    return i;
}

int posicao(char x) {
    if(letra(x)) {
        if(maiusculaMinuscula(x)) {
            return x - 'a' + 1;

        } else {
            return x - 'A' + 1;
        }
    } else {
        return 0;
    }
}

main() {
    char x;
    printf("Digite um caractere: ");
    scanf("%c", &x);
    printf("%d", posicao(x));
}
