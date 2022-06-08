#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int piso(float g) {
    int n = abs(g);
    int i = 0;
    int x = 0;
    for(i; i<n; i++) {
        x++;
    }
    return (g > 0) ? x : -x -1;
}

int teto(float g) {
    int n = abs(g);
    int i = 0;
    int x = 0;
    for(i; i<n + 1; i++) {
        x++;
    }
    return (g > 0) ? x : -x +1;
}

main() {
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);
    printf("Piso: %d", piso(n));
    printf("\nTeto: %d", teto(n));
}
