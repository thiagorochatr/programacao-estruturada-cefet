#include <stdio.h>
#include <stdlib.h>

void escreveTexto(char* n, int d, int m, int a, int s, char e) {
    printf("O nome � %s, a data de nascimento � %d/%d/%d, o sal�rio � %d. � chefe? %c", n, d, m, a, s, e);
}

main() {
    char* nome;
    int dia, mes, ano, salario;
    char eChefe;
        nome = (char*)malloc(sizeof(char));
    printf("Digite o nome: ");
    gets(nome);
    printf("Digite a data de nascimento.\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("M�s: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    printf("Digite o sal�rio: ");
    scanf("%d", &salario);
    printf("Voc� � um chefe da empresa? sim-S, n�o-N: ");
    scanf("\n");
    eChefe = getchar();

    escreveTexto(nome, dia, mes, ano, salario, eChefe);

    free(nome);
}
