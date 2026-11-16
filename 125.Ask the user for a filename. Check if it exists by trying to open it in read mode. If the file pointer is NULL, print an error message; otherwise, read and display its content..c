#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File does not exist or cannot be opened!");
    }
    else
    {
        printf("\nFile content:\n");

        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}