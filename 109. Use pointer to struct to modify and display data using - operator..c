
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    // Assign pointer to structure
    ptr = &s;

    // Input student details
    printf("Enter Student Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    // Modify student details
    printf("\nEnter updated marks: ");
    scanf("%f", &ptr->marks);

    // Display updated details
    printf("\n--- Updated Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Updated Marks: %.2f\n", ptr->marks);

    return 0;
}
