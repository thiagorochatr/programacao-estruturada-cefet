#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

enum Tsetor{verde=1,amarelo,azul,branco};

struct Tcadeira {
    enum Tsetor setor;
    char fileira;
    int coluna;
};

main() {
    struct Tcadeira cadeira;
    cadeira.setor = 1;
    printf("%d", cadeira.setor);
}
