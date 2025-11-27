#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {

    struct Employee *emp;

    // Allocate memory for 1 structure
    emp = (struct Employee *) malloc(sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // ------ INPUT ------
    printf("Enter Employee Name: ");
    fgets(emp->name, sizeof(emp->name), stdin);

    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);

    // ------ OUTPUT ------
    printf("\n--- Employee Details ---\n");
    printf("Name: %s", emp->name);
    printf("ID: %d\n", emp->id);
    printf("Salary: %.2f\n", emp->salary);

    // Free allocated memory
    free(emp);

    return 0;
}
