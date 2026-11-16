#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Month m;

    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    for (m = JANUARY; m <= DECEMBER; m++) {
        printf("%d. ", m);

        switch (m) {
            case JANUARY: printf("January"); break;
            case FEBRUARY: printf("February"); break;
            case MARCH: printf("March"); break;
            case APRIL: printf("April"); break;
            case MAY: printf("May"); break;
            case JUNE: printf("June"); break;
            case JULY: printf("July"); break;
            case AUGUST: printf("August"); break;
            case SEPTEMBER: printf("September"); break;
            case OCTOBER: printf("October"); break;
            case NOVEMBER: printf("November"); break;
            case DECEMBER: printf("December"); break;
        }

        printf(" - %d days\n", days[m - 1]);
    }

    return 0;
}