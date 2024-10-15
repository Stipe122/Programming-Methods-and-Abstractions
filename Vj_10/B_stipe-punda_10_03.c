
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void popravi_txt(const char* input_txt, const char* output_txt) {

    FILE* ulaz = fopen(input_txt, "r");
    FILE* izlaz = fopen(output_txt, "w");

    if (ulaz == NULL || izlaz == NULL) {
        printf("Error!\n");
        return -1;
    }

    char red[256];

    while (fgets(red, sizeof(red), ulaz) != NULL) {

        int len = strlen(red);
        for (int i = 0; i < len; i++) {
            if (isalpha(red[i])) {
                fputc(tolower(red[i]), izlaz);
            }
        }
    }

    fclose(ulaz);
    fclose(izlaz);
}

int main() {
    char input_txt[100] = "zdk3_input.txt";
    char output_txt[100] = "zdk3_output.txt";

    popravi_txt(input_txt, output_txt);

    printf("Program uspjesan!\n");

    return 0;
}
