#include <stdio.h>

int niz(a1,d,n){
    int counter = 0;

    for (int i = a1 ; counter < n+1 ; i = i + d ){

        if (counter == n)
            return i-d;
        else
            counter++;
            continue;}}

int main(){

    int a1,d,n;

    printf("Unesite a1, d i n: \n");
    scanf("%d %d %d", &a1, &d, &n);

    printf("%d", niz(a1,d,n));

    return 0;}
