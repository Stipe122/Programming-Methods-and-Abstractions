#include <stdio.h>

int isSymmetricBinary(int n) {
    int bitCount = 6;
    int i, j;

    for (i = 0, j = bitCount - 1; i < j; i++, j--) {
        int bit1 = (n >> i) & 1; // i-ti bit od početka
        int bit2 = (n >> j) & 1; // j-ti bit od kraja
        if (bit1 != bit2) {
            return 0; // nije simetričan
        }
    }

    return 1; // simetričan
}

int main() {
    int n;
    printf("Unesite prirodni broj: \n ");
    scanf("%d", &n);

    if (isSymmetricBinary(n)) {
        printf("%d ima simetrican binarni zapis.\n", n);
    } else {
        printf("%d nema simetrican binarni zapis.\n", n);
    }

    return 0;
}

