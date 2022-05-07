#include <stdio.h>;
#include <math.h>;

float areaPorAng(int m, int n, float a) {
    float i;
    i = (m*n*sin(a))/2;
    return i;
}

float grauPraRad(float n) {
    const float pi = 3.141592;
    n = (n*pi)/180;
    return n;
}

main() {
    int a, b;
    float n;
    printf("Digite um dos lados: ");
    scanf("%d", &a);
    printf("Digite o outo lado: ");
    scanf("%d", &b);
    printf("Digite o angulo em graus: ");
    scanf("%f", &n);
    n = grauPraRad(n);
    printf("%f", areaPorAng(a, b, n));
}
