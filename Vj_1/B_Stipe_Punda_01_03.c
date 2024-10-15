#include <stdio.h>

int main()
{
    int br, zbr, k, br2, rez, i;

    printf("Unesite broj\n");
    scanf("%d", &br);

    rez = 0;
    br2 = br;
    for (i=0 ; i<4 ; ++i)
    {
        k = br % 10;
        br = br / 10;

        rez = rez + k*k*k;
    }

    if (rez == br2)
        printf("%d je Armstrongov broj\n", br2);
    else
        printf("%d nije Armstrongov broj\n", br2);





    return 0;

}
