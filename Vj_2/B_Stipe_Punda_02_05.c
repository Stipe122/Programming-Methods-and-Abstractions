#include <stdio.h>

int funkcija(a,b,n){
int rez = 0;
    for (int i=a ; i<b+1 ; i=i+n)
        rez = rez + i;
    return rez;
}
int main()
{
    int a,b,n;


    printf("Unesite interval [a,b]\n");
    scanf("%d,%d", &a, &b);
    printf("Unesite n:\n");
    scanf("%d", &n);



    printf("Zbroj je %d", funkcija(a,b,n));

    return 0;
}
