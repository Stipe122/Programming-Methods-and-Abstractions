#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int provjera(char const* string1, char const* string2)
{
    int len1, len2;
    len1 = strlen(string1);
    len2 = strlen(string2);
    if (len1 == len2)
        return 1;
    return 0;

}

void anagram(char* string1, char* string2)
{
    int a, i, j, temp;
    int len1 = strlen(string1);
    int brojac1[26] = { 0 };
    int brojac2[26] = { 0 };

    a = provjera(string1, string2);

    if (a != 1)
    {
        printf("nisu anagram\n");
    }
    else
    {
        for (i = 0; i < len1; i++)
        {
            brojac1[string1[i] - 'a']++;
            brojac2[string2[i] - 'a']++;
        }

        for (i = 0; i < 26; i++)
        {
            if (brojac1[i] != brojac2[i])
            {
                printf("nisu anagram\n");
                return;
            }
        }
        printf("jesu anagram\n");
    }
}

int main(void)
{

    char string1[10] = "trava";
    char string2[10] = "vatra";

    anagram(string1, string2);

    return 0;
}

