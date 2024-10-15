#include <stdio.h>

int funkc(n){

    printf("%d, ", n);
    while (n != 1){
        if (n % 2 == 0)
            n = n / 2;
        else if (n % 2 == 1)
            n = 3 * n + 1;
        printf("%d, ", n);}
    return 0;}


int main(){
    int n;

    printf("Unesite n: \n");
    scanf("%d", &n);

    funkc(n);

    return 0;}







