#include <stdio.h>
#include <stdlib.h>

void escreveTexto(char* n, int d, int m, int a, int s, char e) {
    printf("O nome é %s, a data de nascimento é %d/%d/%d, o salário é %d. É chefe? %c", n, d, m, a, s, e);
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
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    printf("Digite o salário: ");
    scanf("%d", &salario);
    printf("Você é um chefe da empresa? sim-S, não-N: ");
    scanf("\n");
    eChefe = getchar();

    escreveTexto(nome, dia, mes, ano, salario, eChefe);

    free(nome);
}
