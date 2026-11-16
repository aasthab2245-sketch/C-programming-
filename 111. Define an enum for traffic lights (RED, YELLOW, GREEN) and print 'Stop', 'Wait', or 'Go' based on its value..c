
#include <stdio.h>

// Define enumeration
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight signal;

    // Assign traffic light value
    signal = RED;

    // Check and display message
    switch(signal) {
        case RED:
            printf("RED: Stop\n");
            break;

        case YELLOW:
            printf("YELLOW: Wait\n");
            break;

        case GREEN:
            printf("GREEN: Go\n");
            break;

        default:
            printf("Invalid Signal\n");
    }

    return 0;
}
