#include <stdio.h>

int main()
{
    int n, digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        count[0] = 1;

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times = %d\n", maxDigit);
    printf("Number of occurrences = %d", maxCount);

    return 0;
}