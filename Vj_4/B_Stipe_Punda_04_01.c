#include <stdio.h>

int funkc(a,b,c){

    return (a > b)?(b > c)? c : b :(a > c)? c: a;
}

int main(){

    int a, b, c;

    printf("Unesite tri broja: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Najmanji broj je %d", funkc(a,b,c));

    return 0;}
