#include <stdio.h>

void funkcija(int* pm, int* pn){

    if ((*pm % 2) == 0){
        *pm = *pm/2;
        }
    *pn = *pn * 3 + 1;
}


int main(){
    int m, n;


    printf("Unesite dva broja \n");
    scanf("%d %d", &m, &n);

    funkcija(&m,&n);

    printf("%d %d", m , n);







    return 0;
}
