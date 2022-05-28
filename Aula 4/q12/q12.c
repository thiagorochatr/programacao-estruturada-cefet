#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

main() {
    int p, n;
    printf("Digite o valor: ");
    scanf("%d", &p);
    n = p/500;
    if(n != 0) {
        printf("\n%d cedula(s) de X$500", n);
    }
    p = p - n*500;
    n = p/100;
    if(n != 0) {
        printf("\n%d cedula(s) de X$100", n);
    }
    p = p - n*100;
    n = p/50;
    if(n != 0) {
        printf("\n%d cedula(s) de X$50", n);
    }
    p = p - n*50;
    n = p/10;
    if(n != 0) {
        printf("\n%d cedula(s) de X$10", n);
    }
    p = p - n*10;
    n = p/5;
    if(n != 0) {
        printf("\n%d cedula(s) de X$5", n);
    }
    p = p - n*5;
    n = p/1;
    if(n != 0) {
        printf("\n%d cedula(s) de X$1", n);
    }
}
