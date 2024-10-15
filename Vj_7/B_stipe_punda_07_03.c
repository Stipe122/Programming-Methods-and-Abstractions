#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prebroji(char* string, int len,char n){
    int i, counter = 0;

    for (i = 0 ; i < len ; i++){

        if ((int)string[i] == (int)n)
            counter++;
    }

    if (counter == 0)
        return -1;
    else
        return counter;

}

int main(){
    char string[] = "strssakSkkss";
    char n = 's';
    int len = strlen(string);


    printf("Znak se pojavljuje %d puta\n", prebroji(string,len,n));


return 0;
}
