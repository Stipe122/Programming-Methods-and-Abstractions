#include <stdio.h>

int funkc(god,mj,dan){

    if (dan < 1 || dan > 31 || mj > 12 || mj < 1)
        return 0;
    if ((god < 1900) || (god > 2022))
        return 0;

    if (((god % 4 == 0) && (god % 100 != 0)) || (god % 400 == 0)){
        if ((mj == 2) && (dan > 29))
            return 0;
        else if (((mj == 1) || (mj == 3) || (mj == 5) || (mj == 7) || (mj == 8) || (mj == 10) || (mj == 12)) && (dan > 31))
            return 0;
        else if (((mj == 4) || (mj == 6) || (mj == 9) || (mj == 11)) && (dan > 30))
            return 0;
        else
            return 1;}
    else
        return 2;}




int main(){

    int god,mj,dan;

    printf("Unesite datum rodenja u formatu dan, mjesec, godina \n");
    scanf("%d %d %d", &dan, &mj, &god);


    switch (funkc(god,mj,dan)) {
        case 0:
            printf("nije validan\n");
            break;
        case 1:
            printf("validan - prijestupna");
            break;
        case 2:
            printf("validan - nije prijestupna");
            break;}

    return 0;}








