#include <stdio.h>

int main() {
    enum Traffic { RED, YELLOW, GREEN };

    enum Traffic light;
    printf("Enter light (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &light);

    if (light == RED) {
        printf("Stop\n");
    } 
    else if (light == YELLOW) {
        printf("Wait\n");
    } 
    else if (light == GREEN) {
        printf("Go\n");
    } 
    else {
        printf("Invalid input\n");
    }

    return 0;
}
