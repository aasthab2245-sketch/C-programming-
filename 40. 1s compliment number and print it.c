#include <stdio.h>

int main() {
    long long binary, complement = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        digit = binary % 10;

        if (digit == 0)
            complement = complement + 1 * place;
        else
            complement = complement + 0 * place;

        place = place * 10;
        binary = binary / 10;
    }

    printf("1's Complement = %lld", complement);

    return 0;
}