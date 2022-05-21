#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int eDivisivel(int n, int m) {
    int i = 0;
    if(n % m == 0) {
        i = 1;
    }
    return i;
}

main() {
    int n, m;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n);
    printf("Digite o segundo numero: ");
    scanf("%d", &m);
    printf("E divisivel? %i", eDivisivel(n, m));
}
