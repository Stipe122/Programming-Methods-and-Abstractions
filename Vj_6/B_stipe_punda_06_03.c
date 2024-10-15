#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void strcpi(char* str1, char* str2){

while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';

}

int main(){

char str1[] = "abcd";
char str2[] = "efdrrer";

strcpy(str1,str2);

printf("%s", str1);

return 0;
}
