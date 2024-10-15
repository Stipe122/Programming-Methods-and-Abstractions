#include <stdio.h>

int funkc(n){

    if (n % 2 == 0)
        n = n / 2;
    else if (n % 2 == 1)
        n = 3 * n + 1;
    else
        n = 0;

    return n;
}


int main(){
    int n;
    printf("Unesite n: \n");
    scanf("%d", &n);

    printf("%d", funkc(n));

    return 0;
}
