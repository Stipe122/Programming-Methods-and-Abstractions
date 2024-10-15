#include <stdio.h>

int rekurz(int n, int m, int i, int* suma){
    if (n+1 == 0) {
        return 0;
    }

    if (i % m == 0) {
        *suma += i;
        return rekurz(n-1, m, i+1, suma);
    }

    return rekurz(n, m, i+1, suma);
}

int main(){
    int n = 4;
    int m = 2;
    int i = 0;
    int suma = 0;

    rekurz(n, m, i, &suma);

    printf("%d\n", suma);

    return 0;
}















