#include <stdio.h>

int main() {
    enum Role { ADMIN = 1, USER, GUEST };
    int role;

    printf("Select Role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Hello User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You can browse only.\n");
            break;

        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
