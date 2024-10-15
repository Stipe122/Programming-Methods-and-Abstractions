#include <stdbool.h>

int palindrom(int br, int* rez) {
    if (br == 0)
        return true;
    else {
        if (palindrom(br / 10, rez)) {
            if (br % 10 == *rez % 10) {
                *rez /= 10;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int br = 456654, rez;

    rez = br;

    if (palindrom(br, &rez))
        printf("%d je palindrom.\n", br);
    else
        printf("%d nije palindrom.\n", br);


    return 0;
}



























