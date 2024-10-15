#include <stdio.h>

void unos(int a[], int n){
    for (int k = 0, q = 1 ; k < n ; k++, q=q+2){
        a[k] = q;
    }

}

void ispis(int a [], int n){
    for (int i = 0 ; i < n ; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int prosjek(int a[], int n){
    int rez;
    for (int j = 0 ; j < n ; j++){
        rez += a[j];
        }
    return (rez / n) - 1;
}

int main(){

    int n = 4;
    int a[n];

    unos(a,n);
    ispis(a,n);
    printf("prosjecna vrijednost niza je %d \n", prosjek(a,n));

    return 0;
}





















