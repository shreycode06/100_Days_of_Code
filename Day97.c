#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining;
};

int main() {

    struct Employee emp_write, emp_read;
    FILE *fp;

    // ---- INPUT FROM USER ----
    printf("Enter Employee Name: ");
    fgets(emp_write.name, sizeof(emp_write.name), stdin);

    printf("Enter Employee ID: ");
    scanf("%d", &emp_write.id);

    printf("Enter Salary: ");
    scanf("%f", &emp_write.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d",
          &emp_write.joining.day,
          &emp_write.joining.month,
          &emp_write.joining.year);

    // ---- WRITE TO BINARY FILE ----
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // ---- READ FROM BINARY FILE ----
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // ---- DISPLAY READ DATA ----
    printf("\n--- Employee Details Read From File ---\n");
    printf("Name: %s", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Salary: %.2f\n", emp_read.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp_read.joining.day,
           emp_read.joining.month,
           emp_read.joining.year);

    return 0;
}
