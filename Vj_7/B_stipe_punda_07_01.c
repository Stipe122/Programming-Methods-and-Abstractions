#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* poredaj_po_abc(char* ime1, char* prez1, char* ime2, char* prez2) {

    if ( strcmp(ime1, ime2) < 0 || (strcmp(ime1, ime2) == 0 && strcmp(prez1, prez2) < 0)) {

        return ime1;}

    else {
        return ime2;
    }
}

int main() {

    char ime1[] = "Zna";
    char prez1[] = "Anic";
    char ime2[] = "Zate";
    char prez2[] = "Matic";

    printf("Prva osoba po abecedi je: %s\n", poredaj_po_abc(ime1, prez1, ime2, prez2));

    return 0;
}
