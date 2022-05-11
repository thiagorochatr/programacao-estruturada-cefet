#include <stdio.h>;
#include <math.h>;

void PontoMedio(float *xi, float *xf, float yi, float yf) {
    *xi = (*xi+*xf)/2;
    *xf = (yi+yf)/2;
}


main() {
    float xi, yi, xf, yf;
    printf("Digite o valor de Xi: ");
    scanf("%f", &xi);
    printf("Digite o valor de Yi: ");
    scanf("%f", &yi);
    printf("Digite o valor de Xf: ");
    scanf("%f", &xf);
    printf("Digite o valor de Yf: ");
    scanf("%f", &yf);
    PontoMedio(&xi, &xf, yi, yf);
    printf("O ponto medio e (%.1f, %.1f)", xi, xf);
}
