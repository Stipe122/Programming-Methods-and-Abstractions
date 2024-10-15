#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* spoji(char* string1, char* string2, char* string3) {
    int len1 = strlen(string1);
    int len2 = strlen(string2);
    int len3 = strlen(string3);
    int max_len;

    if (len2 > len1) {
        char* temp = string1;
        string1 = string2;
        string2 = temp;

        int temp_len = len1;
        len1 = len2;
        len2 = temp_len;
    }

    if (len3 > len2) {
        char* temp = string2;
        string2 = string3;
        string3 = temp;

        int temp_len = len2;
        len2 = len3;
        len3 = temp_len;
    }

    max_len = len1 + len2 + 2;
    char* rezultat = (char*) malloc(sizeof(char) * max_len);

    strcpy(rezultat, string1);
    strcat(rezultat, ' ');
    strcat(rezultat, string2);


    return rezultat;
}

int main() {
    char string1[] = "abcd";
    char string2[] = "abcccccccc";
    char string3[] = "abcde";

    char* spojeni = spoji(string1, string2, string3);

    if (spojeni != NULL) {
        printf("%s\n", spojeni);
        free(spojeni);
    }

    return 0;
}
