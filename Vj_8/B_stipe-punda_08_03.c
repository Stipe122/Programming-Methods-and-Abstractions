#include <stdio.h>

int neparni(int n){

    if (n+1 == 1)
        return;

    if (n % 2 == 1)
        printf("%d ", n);

    return neparni(n-1);
}


int main(){
    int n = 18;

    neparni(n);

return 0;
}
