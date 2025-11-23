#include <stdio.h>

int main() {
    enum Role { ADMIN, USER, GUEST };

    const char *names[] = { "ADMIN", "USER", "GUEST" };

    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
