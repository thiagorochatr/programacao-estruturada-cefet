#include <stdio.h>;
#include <math.h>;

const float pi = 3.141592;

float vloEsfera(int r) {
    return (4*pi*r*r*r)/3;
}

main() {
    int r;
    printf("Digite o raio da esfera: ");
    scanf("%d", &r);
    printf("%f", vloEsfera(r));
}
