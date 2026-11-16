#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d", sum);
        printf("\nAverage = %.2f", average);
    }
    else
    {
        printf("No integers found in the file.");
    }

    fclose(fp);

    return 0;
}