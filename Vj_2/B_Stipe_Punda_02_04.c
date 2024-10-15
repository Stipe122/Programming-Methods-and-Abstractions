#include <stdio.h>

int funkcija(br){
    int k;

    while (br != 0){
        br = br / 10;
        ++k;}

    return k;



}
int main()
{
    unsigned br;
    int br1;

    printf("Unesite broj:\n");
    scanf("%d", &br);

    //br1 = br;


    printf("Broj znamenki broja %d je %d\n", br, funkcija(br));


    return 0;
}
