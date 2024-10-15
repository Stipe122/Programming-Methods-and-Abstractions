#include <stdio.h>

void map(int (*function)(int), int *array, int length) {
    for (int i = 0; i < length; i++) {
        array[i] = function(array[i]);
    }
}

int doubleValue(int num) {
    return num * 2;
}

int halfEvenDoubleOdd(int num) {
    if (num % 2 == 0) {
        return num / 2;
    } else {
        return num * 2;
    }
}

int replaceEvenIndicesWithZero(int num) {
    return 0;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array) / sizeof(array[0]);

    // a) udvostručiti svaki član niza
    map(doubleValue, array, length);

    printf("a) Udvostručeni niz: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < length; i++) {
        array[i] = i + 1;
    }

    // b) parne elemente niza prepoloviti, a neparne udvostručiti
    map(halfEvenDoubleOdd, array, length);

    printf("b) Modificirani niz: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < length; i++) {
        array[i] = i + 1;
    }

    // c) elemente na parnim mjestima pretvoriti u nule
    map(replaceEvenIndicesWithZero, array, length);

    printf("c) Modificirani niz: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
