#include <stdio.h>

void funkcija(int a, int* s, int* p){

    while (a != 0){

    *s += a % 10;
    *p *= a % 10;

    a = a / 10;

}}


int main(){
    int a;
    int* s = 0;
    int* p = 1;
    printf("Unesite broj: \n");
    scanf("%d", &a);

    funkcija(a,&s,&p);

    printf("%d %d \n", s , p);

    return 0;
}
