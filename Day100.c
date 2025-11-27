#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;   // pointer stores address of structure

    // ---- MODIFY USING -> OPERATOR ----
    printf("Enter name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // ---- DISPLAY USING -> OPERATOR ----
    printf("\n---- Student Details ----\n");
    printf("Name: %s", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
