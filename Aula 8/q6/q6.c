#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

enum Ttipo{residencial=1,comercial,movel};

struct Ttelefone {
    int ddd;
    int num;
    enum Ttipo tipo;
};

struct Tagenda {
    char* nome;
    struct Ttelefone telefone;
};

main() {
    enum Ttipo teste = movel;
    printf("%d",teste);
};
