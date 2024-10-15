#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* read_file(const char* filename) {

    FILE* file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error\n", filename);

        return NULL;
    }

    char* string = NULL;
    size_t len = 0;
    int c;

    while ((c = fgetc(file)) != EOF) {
        if (islower(c)) {
            len++;
            string = (char*)realloc(string, len * sizeof(char));
            string[len - 1] = (char)c;
        }
    }

    string = (char*)realloc(string, (len + 1) * sizeof(char));
    string[len] = '\0';

    fclose(file);

    return string;
}

int main() {
    char* string = read_file("zdk2.txt");

    if (string == NULL) {
        printf("Error\n");

        return 0;
    }

    printf("%s\n", string);

    free(string);

    return 0;
}
