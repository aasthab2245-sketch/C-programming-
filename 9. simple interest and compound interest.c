#include <math.h>

int main() {
    float P, R, T, SI, CI, Amount;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest
    Amount = P * pow((1 + R / 100), T);
    CI = Amount - P;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}