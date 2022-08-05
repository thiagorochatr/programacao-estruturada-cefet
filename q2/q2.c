#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void leArranjo(int a[], int t) {
    int i;
    for (i = 0; i < t; i++) {
        printf("Digite o valor da %d posicao: ", i+1);
        scanf("%d", &a[i]);
    }
}

void multArray(int *a, int t) {
    int i;
        for (i = 0; i < t; i++) {
            a[i] = a[i] * i;
        }

}

main() {
    int t = 3;
    int a[t];
    int i;
  leArranjo(a, t);
  multArray(&a, t);
  for (i = 0; i < t; i++) {
    printf("%d", a[i]);
  }
}
