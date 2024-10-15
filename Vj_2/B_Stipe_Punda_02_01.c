#include <stdio.h>

int main()
{
    char prvo_ime, prvo_prezime, zadnje_ime, zadnje_prezime;
    char ime, prezime;

    printf("Unesite inicijale:\n");
    scanf(" %c %c", &ime, &prezime);

    prvo_ime = ime;
    zadnje_ime = ime;
    prvo_prezime = prezime;
    zadnje_prezime = prezime;

    printf("\n%c %c\n", ime, prezime);

    while (1)
    {
        printf("Unesite inicijale:\n");
        scanf(" %c %c", &ime, &prezime);

        if ((prezime == '0') || (ime == '0'))
            break;

        if (prezime < prvo_prezime)
        {
            prvo_prezime = prezime;
            prvo_ime = ime;
        }
        else if (prezime == prvo_prezime)
        {
            if (ime < prvo_ime)
            {
                prvo_prezime = prezime;
                prvo_ime = ime;
            }
        }
        else if (prezime > zadnje_prezime)
        {
            zadnje_prezime = prezime;
            zadnje_ime = ime;
        }
        else if (prezime == zadnje_prezime)
        {
            if (ime > zadnje_ime)
            {
                zadnje_prezime = prezime;
                zadnje_ime = ime;
            }
        }
    }

    printf("Inicijali prve osobe po abecedi su: %c %c\n", prvo_ime, prvo_prezime);
    printf("Inicijali zadnje osobe po abecedi su: %c %c\n", zadnje_ime, zadnje_prezime);

    return 0;
}
