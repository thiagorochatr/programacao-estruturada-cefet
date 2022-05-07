#include <stdio.h>;
#include <math.h>;

const float pi = 3.141592;

float grauPraRad(float n) {
    n = (n*pi)/180;
    return n;
}


main() {
    float n;
    printf("Digite o angulo em graus: ");
    scanf("%f", &n);
    printf("%f", grauPraRad(n));
}
