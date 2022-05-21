#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int imc(float p, float h) {
    float i = p/(h*h);
    int x;
    if(i < 25) {
        x = 0;
    } else if(i >= 25 && i < 30) {
        x = 1;
    } else if(i >= 30 && i < 35) {
        x = 2;
    } else if(i >= 35 && i < 40) {
        x = 3;
    } else {
        x = 4;
    }

    return x;
}

main() {
    float p, h;
    printf("Digite o peso: ");
    scanf("%f", &p);
    printf("Digite a altura: ");
    scanf("%f", &h);
    printf("Grau de obesidade: %d", imc(p,h));
}
