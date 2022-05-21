#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int eTriangulo(int m, int n, int p) {
    int i = 0;
    if(m < n+p && n < m+p && p < n+m) {
        i = 1;
    }
    return i;
}

int eEquilatero(int m, int n, int p) {
    int i = 0;
    if(eTriangulo(m,n,p)) {
        if(m != n && m != p && n != p) {
            i++;
        } else {
            i++;
            i++;
            if(m == n && m == p && n == p) {
                i++;
            }
        }
    }
    return i;
}

main() {
    int a, b, c;
    printf("Digite o primeiro lado: ");
    scanf("%d", &a);
    printf("Digite o segundo lado: ");
    scanf("%d", &b);
    printf("Digite o terceiro lado: ");
    scanf("%d", &c);
    printf("%d", eEquilatero(a,b,c));
}
