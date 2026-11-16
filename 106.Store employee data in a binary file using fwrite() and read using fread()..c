
#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    // Open binary file for writing
    fp = fopen("employee.dat", "wb");

    if(fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    // Write structure into binary file
    fwrite(&e, sizeof(e), 1, fp);

    fclose(fp);

    // Open binary file for reading
    fp = fopen("employee.dat", "rb");

    if(fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    // Read structure from binary file
    fread(&e, sizeof(e), 1, fp);

    // Display employee details
    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", e.emp_id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    fclose(fp);

    return 0;
}
