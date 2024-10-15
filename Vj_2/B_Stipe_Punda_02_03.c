#include <stdio.h>

void funkcija(a,b,m,n){
    int i;
    for (i=a ; i<b+1 ; ++i)
    {
        if ((i % m == 0) && (i % n == 0))
            printf("FizzBuzz\n");
        else if (i % m == 0)
            printf("Fizz\n");
        else if (i % n == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }



}
int main(){

    int a,b;
    int m = 3, n = 5;

    printf("Unesite interval [a,b]\n");
    scanf("%d,%d", &a, &b);


    funkcija(a,b,m,n);


    return 0;
}
