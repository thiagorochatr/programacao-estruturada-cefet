#include <stdio.h>
#include <stdlib.h>

void escreveTexto(char* t) {
    printf(t);
}

main() {
    char* nome;

    nome = (char*)malloc(sizeof(char));

    printf("Digite o texto: ");
    gets(nome);

    escreveTexto(nome);

    free(nome);
}
