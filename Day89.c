#include <stdio.h>

int main() {
    enum Example {
        ALPHA = 5,
        BETA = 10,
        GAMMA = 20
    };

    printf("ALPHA = %d\n", ALPHA);
    printf("BETA  = %d\n", BETA);
    printf("GAMMA = %d\n", GAMMA);

    return 0;
}
