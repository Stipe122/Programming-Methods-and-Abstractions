#include "stdio.h"
#include "stdlib.h"

int funkcija(int* a, int size){

    int num = 2, i;

    for( i = 2 ; i < size ; i += 2)
    {
        a[i]=num;
        num++;
    }

    for( i = 0 ; i < size ; i++)
    {
        printf("%d ",a[i]);
    }


}

int main(){

int *a = (int*) calloc(10,sizeof(int));
int size = 10;

funkcija(a,size);

return 0;
}
