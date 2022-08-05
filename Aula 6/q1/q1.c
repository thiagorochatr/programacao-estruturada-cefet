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

void trocaArray(int *a, int t) {
    int aux, i;
    int j = t-1;
    if(t % 2 == 0) {
        for (i = 0; i < t/2; i++) {
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;
            j--;
        }
    } else {
            for (i = 0; i <= t/2; i++) {
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;
            j--;
        }
    }
}

main() {
    int t;
    printf("Digite o tamanho da Array: ");
    scanf("%d", &t);
    int a[t];
    int i;
  leArranjo(a, t);
  trocaArray(&a, t);
  for (i = 0; i < t; i++) {
    printf("%d", a[i]);
  }
}
