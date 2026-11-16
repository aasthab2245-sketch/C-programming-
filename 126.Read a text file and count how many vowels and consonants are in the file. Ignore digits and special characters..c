#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("\nNumber of vowels: %d", vowels);
    printf("\nNumber of consonants: %d", consonants);

    fclose(fp);

    return 0;
}