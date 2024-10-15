#include <stdio.h>

int funkc(god,mj,dan){

    if (dan < 1 || dan > 31 || mj > 12 || mj < 1)
        return 0;
    if ((god < 1900) || (god > 2022))
        return 0;

    if (((god % 4 == 0) && (god % 100 != 0)) || (god % 400 == 0)){
        if ((mj == 2) && (dan > 29))
            return 0;
        else if (((mj == 1) || (mj == 3) || (mj == 5) || (mj == 7) || (mj == 8) || (mj = 10) || (mj = 12)) && (dan > 31))
            return 0;
        else if (((mj == 4) || (mj == 6) || (mj == 9) || (mj = 11)) && (dan > 30))
            return 0;
        else
            return 1;}
    else
        return 2;}




int main(){

    int god,mj,dan,r;


    while(1){

        printf("Unesite datum rodenja u formatu dan, mjesec, godina \n");
        scanf("%d %d %d", &dan, &mj, &god);

        if ((funkc(god,mj,dan)) == 1){
            r = (2023 - god) / 4;
            printf("Osoba je do sad proslavila %d rodendana\n", r);
            break;}
        else
            continue;}

    return 0;}
