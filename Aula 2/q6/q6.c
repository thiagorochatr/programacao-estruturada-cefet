#include <stdio.h>;
#include <math.h>;

float dist(int xa, int ya, int xb, int yb) {
    return sqrt(pow((xa-xb), 2) + pow((ya-yb), 2));
}

main() {
    int xa, xb, ya, yb;
    printf("Digite xA: ");
    scanf("%d", &xa);
    printf("Digite yA: ");
    scanf("%d", &ya);
    printf("Digite xB: ");
    scanf("%d", &xb);
    printf("Digite yB: ");
    scanf("%d", &yb);
    printf("%f", dist(xa, ya, xb, yb));
}
