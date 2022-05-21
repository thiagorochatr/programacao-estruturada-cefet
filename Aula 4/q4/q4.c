#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int maiorNum2(int n, int m) {
    int i = n;
    if (m > n) {
        i = m;
    }
    return i;
}

int maiorNum3(int n, int m, int p) {
    return maiorNum2(n,m)>p ? maiorNum2(n,m) : p;
}

main() {
    int a, b, c;
        printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);
    printf("O maior numero e %d", maiorNum3(a,b,c));
}
