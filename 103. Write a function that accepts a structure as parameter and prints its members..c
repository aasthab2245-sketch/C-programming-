
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function accepting structure as parameter
void display(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    // Input student details
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Passing structure to function
    display(s);

    return 0;
}
