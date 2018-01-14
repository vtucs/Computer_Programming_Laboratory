/*
9.b. Write and execute a C program that
Read a sentence and print frequency of vowels and total count of consonants.
*/

#include <stdio.h>
#include <ctype.h>

void main()
{
    char str[50], ch;
    int i = 0, ac = 0, ec = 0, ic = 0, oc = 0, uc = 0, cc = 0;
    printf("Enter the string\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            ch = tolower(str[i]);
            switch (ch)
            {
            case 'a':
                ac++;
                break;
            case 'e':
                ec++;
                break;
            case 'i':
                ic++;
                break;
            case 'o':
                oc++;
                break;
            case 'u':
                uc++;
                break;
            default:
                cc++;
            }
        }
    }
    printf("Total consonants are %d\n", cc);
    printf("Frequency of each vowel is\n");
    printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d\n", ac, ec, ic, oc, uc);
    return;
}