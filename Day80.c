#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll, marks;
    char name[50];

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    printf("How many student records do you want to store? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    printf("\n--- Stored Student Records ---\n\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s  |  Roll: %d  |  Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
