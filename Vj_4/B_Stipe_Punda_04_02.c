#include <stdio.h>

void bin(n){
    int m = 0, nula = 0;

    for (int i = sizeof(int) * 8 - 1; i >= 0; i--){
        m = 1 << i;

        if ((n & m) != 0) {
            printf("1");
            nula = 1;
        }
        else if (nula == 1)
             printf("0");
             }}

int main() {
    int n;

    printf("Unesite broj n: \n");
    scanf("%d", &n);

    bin(n);

    return 0;
}

