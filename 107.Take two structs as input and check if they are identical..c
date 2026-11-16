
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input first student's details
    printf("Enter details of First Student:\n");

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Input second student's details
    printf("\nEnter details of Second Student:\n");

    printf("Enter name: ");
    scanf("%s", s2.name);

    printf("Enter roll number: ");
    scanf("%d", &s2.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s2.marks);

    // Compare structure members
    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll_no == s2.roll_no &&
       s1.marks == s2.marks) {

        printf("\nBoth structures are identical.\n");
    }
    else {
        printf("\nBoth structures are not identical.\n");
    }

    return 0;
}
