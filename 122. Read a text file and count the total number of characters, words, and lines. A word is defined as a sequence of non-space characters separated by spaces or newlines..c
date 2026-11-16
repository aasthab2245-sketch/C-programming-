#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("Unable to open file.");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}