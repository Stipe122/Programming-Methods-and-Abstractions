#include <stdio.h>

void crtaj(m,n){
    int i,j;
     for (i = 0 ; i < m ; ++i){
        for (j = 0 ; j < n ; ++j){
            if (((i%2==0) && (j%2==0)) || ((i%2==1) && (j%2==1)))
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }


}
int main()
{
    unsigned m,n;

    printf("Unesite m i n\n");
    scanf("%d %d", &m, &n);

   crtaj(m,n);
    return 0;
}
