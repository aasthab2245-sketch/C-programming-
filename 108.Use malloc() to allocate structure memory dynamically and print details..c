
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *ptr;

    // Dynamically allocate memory
    ptr = (struct Student *)malloc(sizeof(struct Student));

    if(ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input student details
    printf("Enter Student Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    // Free dynamically allocated memory
    free(ptr);

    return 0;
}
