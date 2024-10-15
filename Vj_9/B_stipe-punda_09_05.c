#include <stdio.h>

#define CUB(x) ((x) * (x) * (x))

struct Niz {
    int* niz;
    int brojClanova;
};

void suma_i_umnozak_kubova(struct Niz* niz, int* suma, int* umnozak) {

    int i;

    for (i = 0; i < niz->brojClanova; i++) {
        int kub = CUB(niz->niz[i]);
        *suma += kub;
        *umnozak *= kub;
    }

}

int main() {
    struct Niz NizRez;
    int brojevi[] = {1, 2, 3, 4, 5};
    int brojClanova = sizeof(brojevi) / sizeof(brojevi[0]);

    NizRez.niz = brojevi;
    NizRez.brojClanova = brojClanova;

    int suma = 0;
    int umnozak = 1;

    suma_i_umnozak_kubova(&NizRez, &suma, &umnozak);

    printf("Suma i umnozak kubova clanova niza: %d  %d\n", suma, umnozak);

    return 0;
}
