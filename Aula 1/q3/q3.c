#include <stdio.h>
#include <stdlib.h>

/*
Thiago Rocha
29/04/2022
*/

void escreveTexto(char* n, char* s) {
    printf("\n%s, %s", s, n);
}

main() {
    char* nome;
    char* sobrenome;
        nome = (char*)malloc(sizeof(char));
        sobrenome = (char*)malloc(sizeof(char));
    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o sobrenome: ");
    gets(sobrenome);

    escreveTexto(nome, sobrenome);

    free(nome);
    free(sobrenome);
}
