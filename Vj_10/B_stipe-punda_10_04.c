#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x1, y1;
    int x2, y2;
} Pravokutnik;

Pravokutnik izracunaj_max_opseg(FILE* datoteka) {
    Pravokutnik max_pravokutnik;
    int max_opseg = 0;

    Pravokutnik trenutni_pravokutnik;

    while (fscanf(datoteka, "(%d, %d), (%d, %d)\n", &trenutni_pravokutnik.x1, &trenutni_pravokutnik.y1, &trenutni_pravokutnik.x2, &trenutni_pravokutnik.y2) == 4) {
        int sirina = trenutni_pravokutnik.x2 - trenutni_pravokutnik.x1;
        int visina = trenutni_pravokutnik.y2 - trenutni_pravokutnik.y1;
        int opseg = 2 * (sirina + visina);

        if (opseg > max_opseg) {
            max_opseg = opseg;
            max_pravokutnik = trenutni_pravokutnik;
        }
    }

    return max_pravokutnik;
}

int main() {
    FILE* datoteka = fopen("zdk4.txt", "r");

    if (datoteka == NULL) {
        printf("Error!\n");
        return 0;
    }

    Pravokutnik max_pravokutnik = izracunaj_max_opseg(datoteka);

    fclose(datoteka);

    printf("Najveći pravokutnik ima koordinate: (%d, %d), (%d, %d)\n", max_pravokutnik.x1, max_pravokutnik.y1, max_pravokutnik.x2, max_pravokutnik.y2);

    return 0;
}

