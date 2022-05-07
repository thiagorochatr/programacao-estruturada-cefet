#include <stdio.h>;
#include <math.h>;

void PontoMedio(int *xi,  int *xf, int *yi,int *yf) {
    *xi = (*xi+*xf)/2;
    *xf = (yi+yf)/2;
}


main() {
    int xi, yi, xf, yf;
    printf("Digite o valor de Xi:");
    scanf("%d", &xi);
    printf("Digite o valor de Yi:");
    scanf("%d", &yi);
    printf("Digite o valor de Xf:");
    scanf("%d", &xf);
    printf("Digite o valor de Yf:");
    scanf("%d", &yf);
    printf("O ponto médio é (%f, %f)", PontoMedio(*xi, *xf, yi, yf));
}
