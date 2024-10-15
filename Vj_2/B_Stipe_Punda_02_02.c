#include <stdio.h>p

int main(){

    int n, k;
    char a;

    printf("Unesite broj n: \n");
    scanf("%d", &n);



    do{
        printf("Unesite broj: \n");
        scanf("%d", &k);

        if ((k < 65) || (k > 90)){
            if (k < 0)
              printf(":\n");
            else if (k > 0)
                printf("E\n");}
        else
            printf("%c \n", (char)k);

        --n;

    }
    while(n != 0);



    return 0;
}
