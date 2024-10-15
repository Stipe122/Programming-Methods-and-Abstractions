#include <stdio.h>

int main()
{
    int h1,m1,s1,h2,m2,s2,poc,kraj,rez;
    int h3,m3,s3;

    printf("Unesite vrijeme pocetka filma\n");
    scanf("%d %d %d", &h1, &m1, &s1);

    printf("Unesite vrijeme pocetka filma\n");
    scanf("%d %d %d", &h2, &m2, &s2);

    poc = h1*3600 + m1*60 + s1;
    kraj = h2*3600 + m2*60 + s2;

    if (kraj > poc)
        rez = kraj - poc;
    else if (kraj < poc){
        kraj = kraj + 24*3600;
        rez = kraj - poc;}

    h3 = rez / 3600;
    rez = rez - h3*3600;
    m3 = rez / 60;
    rez = rez - m3*60;
    s3 = rez;

    printf("Film je trajao %d h - %d min - %d sek\n",h3, m3, s3);


    return 0;
}
