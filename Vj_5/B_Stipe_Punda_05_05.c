#include <stdio.h>

void funkcija(int arr[], int* sum, int* prod,int m,int n){

    for (int j = 0 ; j > m, j < n ; j++){

        *sum += arr[j];
        *prod *= arr[j];
}}

int main(){
    int k, temp, arr[5];
    int N = 100;
    int m, n;

    while(1){
        printf("Unesite broj clanova niza: \n");
        scanf("%d", &k);
            if ( k < 0 || k > N){
                printf("Pogreska pri upisu podataka!\n");
                break;}

        for(int i = 0 ; i < k ; i++)  {

            printf("Unesite clan niza: \n");
            scanf("%d", &temp);

            arr[i] = temp;}


        printf("Unesite dva broja: \n");
        scanf("%d %d",&m, &n);
            if (m < 0 || m > k || n < 0 || n > k ){
                printf("Pogreska pri upisu podataka!\n");
                break;}

        int* sum = 0;
        int* prod = 1;

        funkcija(arr,&sum,&prod,m,n);

        printf("%d %d \n", sum, prod);
        break;}

    return 0;
}














