#include <stdio.h>

int funkcija(int a[],int n){
    int sum;

    for(int i = 0 ; i < n ; i = i+2){
        sum += a[i];}

    return sum;}

int main(){

    int n = 7;
    int a[7] = {1, 2, 3, 4, 5, 6, 7};


    printf("Suma je %d \n", funkcija(a,n));

    return 0;
}
