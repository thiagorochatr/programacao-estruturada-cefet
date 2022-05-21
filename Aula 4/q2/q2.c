#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int myFabs(int i) {
    int x = i;
    if(i >= 0) {
        x = i;
    } else {
        x = -i;
    }
    return x;
}

main() {
    int i;
    printf("Digite um numero: ");
    scanf("%i", &i);
    printf("Modulo: %i", myFabs(i));
}
