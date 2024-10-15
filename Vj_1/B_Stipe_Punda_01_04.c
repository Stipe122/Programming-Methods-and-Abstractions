#include <stdio.h>

int main()
{
    int a,b,c,d;
    int min1,max1,min2,max2;

    printf("Unesite prvi interval [a,b]\n");
    scanf("%d,%d", &a, &b);

    printf("Unesite prvi interval [c,d]\n");
    scanf("%d,%d", &c, &d);

    if (a > b){
        min1 = b;
        max1 = a;}
    else{
        min1 = a;
        max1 = b;}

     if (c > d){
        min2 = d;
        max2 = c;}
    else{
        min2 = c;
        max2 = d;}


    if ((min2 > min1) && (min2 >= max1))
        printf("Prazan skup\n");
    else if ((min1 > min2) && (min1 > max2))
        printf("Prazan skup\n");
    else
        if ((min1 < min2) && (max2 < max1))
            printf("Presjek je interval [%d,%d]\n", min2+1, max2-1);
        else if ((min1 > min2) && (max2 > max1))
            printf("Presjek je interval [%d,%d]\n", min1+1, max1-1);
        else if ((min1 < min2) && (max1 < max2))
            printf("Presjek je interval [%d,%d]\n", min2+1, max1-1);
        else if ((min2 < min1) && (max2 < max1))
            printf("Presjek je interval [%d,%d]\n", min1+1, max2-1);


    return 0;
}
