#include <stdio.h>

void funkc(int n, int k) {
    int i, pot, koef;

    printf("%d = ", n);

    for (i = (int)(log(n)/log(k)); i >= 0; i--) {
        pot = pow(k, i);
        koef = n / pot;
        n -= koef * pot;
        if (koef > 0 || i == 0) {
            if (i != (int)(log(n)/log(k)))
                printf(" + ");

            printf("%d", koef);
            if (i > 0)
                printf(" * %d**%d", k, i);}}
}

int main() {
    int n, k;

    printf("Unesite broj n: \n ");
    scanf("%d", &n);
    printf("Unesite bazu k (mora biti izmedu 2 i 16): \n");
    scanf("%d", &k);

    if ((k < 17) && (k > 1))
        funkc(n, k);
    else
        printf("Baza mora biti izmedu 2 i 16! \n");

    return 0;
}
