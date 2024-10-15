#include <stdio.h>

struct Tocka {
    int x;
    int y;
};

struct Pravokutnik {
    struct Tocka donji_lijevi;
    struct Tocka gornji_desni;
};

double izracunaj_opseg(struct Pravokutnik* pravokutnik) {

    double sirina = pravokutnik->gornji_desni.x - pravokutnik->donji_lijevi.x;
    double visina = pravokutnik->gornji_desni.y - pravokutnik->donji_lijevi.y;
    return 2 * (sirina + visina);
}

struct Pravokutnik pravokutnik_najveceg_opsega(struct Pravokutnik* niz, int broj_pravokutnika) {

    struct Pravokutnik najveci_opseg = niz[0];
    double max_opseg = izracunaj_opseg(&najveci_opseg);

    int i;
    for (i = 1; i < broj_pravokutnika; i++) {
        double opseg = izracunaj_opseg(&niz[i]);
        if (opseg > max_opseg) {
            max_opseg = opseg;
            najveci_opseg = niz[i];
        }
    }

    return najveci_opseg;
}

int main() {
    struct Pravokutnik niz_pravokutnika[] = {
        {{1, 2}, {4, 6}},
        {{3, 5}, {8, 10}},
        {{0, 0}, {2, 2}},
    };
    int broj_pravokutnika = sizeof(niz_pravokutnika) / sizeof(niz_pravokutnika[0]);

    struct Pravokutnik najveci_opseg = pravokutnik_najveceg_opsega(niz_pravokutnika, broj_pravokutnika);

    printf("Pravokutnik najveceg opsega:\n");
    printf("Donji lijevi vrh: (%d, %d)\n", najveci_opseg.donji_lijevi.x, najveci_opseg.donji_lijevi.y);
    printf("Gornji desni vrh: (%d, %d)\n", najveci_opseg.gornji_desni.x, najveci_opseg.gornji_desni.y);

    return 0;
}





