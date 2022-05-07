#include <stdio.h>;
#include <math.h>;

float celParaFah(float c) {
    return c*1.8 + 32;
}

main() {
    float c;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    printf("%f", celParaFah(c));
}
