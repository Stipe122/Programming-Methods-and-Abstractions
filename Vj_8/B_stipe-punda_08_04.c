#include <stdio.h>

int pronadi(char *s, char c, int n, int index) {
    if (*s == '\0' || n < 1) {
        return -1;
    }
    if (*s == c) {
        if (n == 1) {
            return index;
        }
        else {
            return pronadi(s+1, c, n-1, index+1);
        }
    }
    else {
        return pronadi(s+1, c, n, index+1);
    }
}

int main(){

    char s[] = "abcabcdeabc";
    char c = 'e';
    int n = 2;
    int index = 0;

    printf("%d", pronadi(&s,c,n,index));


return 0;
}


















