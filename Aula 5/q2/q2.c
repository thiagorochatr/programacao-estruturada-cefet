#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

float pot(int x, int y) {
    float r;
    int p = 1;
    int i = 1;
    for(i; i <= abs(y); i++) {
        p = x*p;
    }
    if(y > 0) {
        r = p;
    } else if(y < 0) {
        r = (float)1/p;
    } else {
        r = 1;
    }
    return r;
}

main() {
    int x,y;
    printf("Digite o valor da base: ");
    scanf("%d", &x);
    printf("Digite o valor do expoente: ");
    scanf("%d", &y);
    printf("%f", pot(x, y));
}
