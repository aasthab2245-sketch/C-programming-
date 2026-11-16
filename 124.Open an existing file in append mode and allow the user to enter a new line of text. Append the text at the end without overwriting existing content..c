#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter a new line of text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    printf("Text appended successfully!");

    fclose(fp);

    return 0;
}