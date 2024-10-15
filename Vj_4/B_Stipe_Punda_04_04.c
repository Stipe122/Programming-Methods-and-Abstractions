#include <stdio.h>

int br_bin(n){
    int counter = 0;
    while(n != 0){

        n = n/2;
        counter ++;
        }
        return counter;}


int jeli_simetrican(n) {
    int br_bita = br_bin(n);
    int i, j;

    for (i = 0, j = br_bita - 1; i < j; i++, j--) {
        int bit1 = (n >> i) & 1;
        int bit2 = (n >> j) & 1;
        if (bit1 != bit2)
            return 0;
        }

    return 1;}

int main() {
    int n;
    printf("Unesite broj: \n ");
    scanf("%d", &n);

    if (jeli_simetrican(n)) {
        printf("%d ima simetrican binarni zapis\n", n);
    } else {
        printf("%d nema simetrican binarni zapis\n", n);
    }

    return 0;
}

