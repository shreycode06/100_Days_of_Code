#include <stdio.h>

int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    enum Status result;
    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &result);

    if (result == SUCCESS) {
        printf("Operation completed successfully.\n");
    }
    else if (result == FAILURE) {
        printf("Operation failed.\n");
    }
    else if (result == TIMEOUT) {
        printf("Operation timed out.\n");
    }
    else {
        printf("Invalid status value.\n");
    }

    return 0;
}
