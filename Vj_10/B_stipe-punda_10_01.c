#include <stdio.h>
#include <stdlib.h>

int file_size(char* dat) {

    FILE* file = fopen(dat, "rb");

    if (file == NULL) {
        printf("Error\n");
        return -1;
    }

    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fclose(file);
    return size;
}

int main() {
    char* dat = "zdk1.txt";

    int size = file_size(dat);
    if (size != -1) {
        printf("Velicina datoteke '%s' je %d bajtova.\n", dat, size);
    }

    return 0;
}

