#include <stdio.h>;
#include <math.h>;
#include <conio.h>;

main() {
    int x = 1;
    printf("Com X = 1\n");
    printf("%d", !(!x && x) && (!x || x));
    getch();
    x = 0;
    printf("\nAgora com X = 0\n");
    printf("%d", !(!x && x) && (!x || x));
    getch();
    printf("\nProvado :)\nNão precisa saber o valor logico de x");
}
