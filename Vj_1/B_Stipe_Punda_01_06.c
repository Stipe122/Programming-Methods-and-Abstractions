#include <stdio.h>

int main()
{
   int jedna,dvi,pet,kn,kn2;


   printf("Unesite iznos u kunama\n");
   scanf("%d", &kn);

    kn2 = kn;
    pet = 0;
    dvi = 0;
    jedna = 0;

   if (kn >= 5)
        pet = kn / 5;
        kn = kn - (5*pet);

    if (kn >= 2)
        dvi = kn / 2;
        kn = kn -(2*dvi);

    if (kn >= 1)
        jedna = kn / 1;
        kn = kn - (1*dvi);

    printf("Za iznos %d dobijamo %d od pet kuna, %d od dvije kune i %d od jedne kune\n", kn2, pet, dvi, jedna);

    return 0;
}
