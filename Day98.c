#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    // ---- INPUT FIRST STRUCT ----
    printf("Enter first student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter first student roll: ");
    scanf("%d", &s1.roll);

    printf("Enter first student marks: ");
    scanf("%f", &s1.marks);

    getchar();  // clear newline

    // ---- INPUT SECOND STRUCT ----
    printf("\nEnter second student name: ");
    fgets(s2.name, sizeof(s2.name), stdin);

    printf("Enter second student roll: ");
    scanf("%d", &s2.roll);

    printf("Enter second student marks: ");
    scanf("%f", &s2.marks);

    // ---- CHECK IDENTICAL ----
    if ( strcmp(s1.name, s2.name) == 0 &&
         s1.roll == s2.roll &&
         s1.marks == s2.marks ) 
    {
        printf("\nBoth structures are IDENTICAL.\n");
    } 
    else {
        printf("\nStructures are NOT identical.\n");
    }

    return 0;
}
