

#include <stdio.h>

// Structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Structure for Employee
struct Employee {
    int emp_id;
    char name[50];
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d",
          &e.joining_date.day,
          &e.joining_date.month,
          &e.joining_date.year);

    // Display employee details
    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", e.emp_id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    printf("Joining Date: %02d/%02d/%04d\n",
           e.joining_date.day,
           e.joining_date.month,
           e.joining_date.year);

    return 0;
}
