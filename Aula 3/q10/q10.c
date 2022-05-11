#include <stdio.h>
#include <math.h>

void soma(int *nx, int *dx, int ny, int dy) {
    *nx = (*nx * dy)+(ny * *dx);
    *dx = *dx * dy;
}

void subtracao(int *nx, int *dx, int ny, int dy) {
    *nx = (*nx * dy)-(ny * *dx);
    *dx = *dx * dy;
}

void multiplicacao(int *nx, int *dx, int ny, int dy) {
    *nx = *nx * ny;
    *dx = *dx * dy;
}

void divisao(int *nx, int *dx, int ny, int dy) {
    *nx = *nx * dy;
    *dx = *dx * ny;
}

main() {
    int nx, dx, ny, dy, auxn, auxd;
    printf("Digite o valor do numerador de X: ");
    scanf("%d", &nx);
    printf("Digite o valor do denominador de X: ");
    scanf("%d", &dx);
    printf("Digite o valor do numerador de Y: ");
    scanf("%d", &ny);
    printf("Digite o valor do denominador de Y: ");
    scanf("%d", &dy);
    auxn = nx;
    auxd = dx;
    soma(&auxn, &auxd, ny, dy);
    printf("A soma e %d/%d", auxn, auxd);
    auxn = nx;
    auxd = dx;
    subtracao(&auxn, &auxd, ny, dy);
    printf("\nA subtracao e %d/%d", auxn, auxd);
    auxn = nx;
    auxd = dx;
    multiplicacao(&auxn, &auxd, ny, dy);
    printf("\nA multipliacao e %d/%d", auxn, auxd);
    auxn = nx;
    auxd = dx;
    divisao(&auxn, &auxd, ny, dy);
    printf("\nA divisao e %d/%d", auxn, auxd);
}
