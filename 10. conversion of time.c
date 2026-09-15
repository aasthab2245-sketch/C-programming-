#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    remainingSeconds = seconds % 3600;
    minutes = remainingSeconds / 60;
    remainingSeconds = remainingSeconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, remainingSeconds);

    return 0;
}