#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usporedi(const char* string1, const char* string2, int* len_max, char* string_max){

    int len1 = strlen(string1);
    int len2 = strlen(string2);

    if (len1 > len2){
        *len_max = len1;
        strcpy(string_max,string1);}
    else if (len1 < len2){
        *len_max = len2;
        strcpy(string_max,string2);}
}

int main(){

    char string1[] = "string";
    char string2[] = "stringstring";


    int len_max  = 0;
    char string_max[20];

    usporedi(string1,string2,&len_max,string_max);

    printf("Duljina duzeg stringa je: %d\n", len_max);
    printf("String je: %s\n", string_max);

    return 0;
}

















