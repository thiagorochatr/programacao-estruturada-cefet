#include <stdio.h>;
#include <math.h>;

int delta(int a, int b, int c) {
    return (b*b)-(4*a*c);
}

main() {
    int a, b, c;
        printf("Digite A: ");
    scanf("%d", &a);
        printf("Digite B: ");
    scanf("%d", &b);
        printf("Digite C: ");
    scanf("%d", &c);
    printf("%d", delta(a, b, c));
}
