#include <stdio.h>

int jednoznam(int n, int* k){
    int nn = 1;
    if ( n < 9)
        return 0;

    while (n != 0){
        nn *= n%10;
        n /= 10;
    }
    (*k)++;

    return jednoznam(nn,k);
}


int main(){

    int n = 727;
    int k = 0;

    jednoznam(n,&k);

    printf("Rezultat je %d koraka\n", k+1);

return 0;
}


















