#include <stdio.h>

int main()
{
    int a,b;
    char op;

    printf("Unesite dva broja i operaciju\n");
    scanf("%d %c %d", &a, &op, &b);

    if (op == '+')
        printf("%d", a+b);
    else if (op == '-')
        printf("%d", a-b);
    else if (op == '*')
        printf("%d", a*b);

    if (op == '/')
    {
        if (b == 0)
            printf("Zabranjeno je dijeliti s nulom!");
        else
            printf("%d i ostatak %d", a/b, a%b);
    }

    return 0;
}

