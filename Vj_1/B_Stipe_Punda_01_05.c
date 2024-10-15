#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y;

    printf("Unesite dva broja intervala [a,b]\n");
    scanf("%d,%d", &a, &b);

    x = a + rand()%(b-a+1);
    y = a + rand()%(b-a+1);

    printf("Dva slucajna broja su %d i %d\n", x ,y);

    if (x > y)
        printf("%d je veci broj", x);
    else if (y > x)
        printf("%d je veci broj", y);
    else
        printf("Brojevi su jednaki");


    return 0;
}
