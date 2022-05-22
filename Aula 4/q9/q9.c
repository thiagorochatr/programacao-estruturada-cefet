#include <stdio.h>
#include <stdlib.h>

char* meses(int x) {
    char* mes;
    mes = (char*)malloc(sizeof(char));
    if(x == 1) {
        mes = "Janeiro";
    } else if(x == 2) {
        mes = "Fevereiro";
    } else if(x==3) {
        mes = "Março";
    } else if(x==4) {
        mes = "Abril";
    } else if(x==5) {
        mes = "Maio";
    } else if(x==6) {
        mes = "Junho";
    } else if(x==7) {
        mes = "Julho";
    } else if(x==8) {
        mes = "Agosto";
    } else if(x==9) {
        mes = "Setembro";
    } else if(x==10) {
        mes = "Outubro";
    } else if(x==11) {
        mes = "Novembro";
    } else {
        mes = "Dezembro";
    }
    return mes;
    free(mes);
}

main() {
    int mes;
    char* qualMes;
    qualMes = (char*)malloc(sizeof(char));
    qualMes = "";
    printf("Digite o numero: ");
    scanf("%d", &mes);
    if(mes < 1 || mes > 12) {
        printf("%s", qualMes);
    } else {
        qualMes = meses(mes);
        printf("%s", qualMes);
    }
    free(qualMes);
}
