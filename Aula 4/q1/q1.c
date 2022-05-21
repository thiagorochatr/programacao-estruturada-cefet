#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int vogalConsoante(char a) {
    int i = 0;
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' ||a == 'O' || a == 'U') {
        i = 1;
    }
    return i;
}

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

int algarismo(char a) {
    int i = 0;
    if(a >= '0' && a<= '9') {
        i =1;
    }
    return i;
}

main() {
    char i;
    printf("Digite um caractere: ");
    scanf("%c", &i);
    printf("(a)(e) E vogal? %i", vogalConsoante(i));
    printf("\n(b)(c) E minuscula? %i", maiusculaMinuscula(i));
    printf("\n(d) E letra? %i", letra(i));
    printf("\n(d) E algarismo? %i", algarismo(i));
}

// Não ser vogal não significa ser consoante!! Caractere também pode ser número, '!', '.', etc.
