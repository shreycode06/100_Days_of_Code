#include <stdio.h>

int main() {
    enum Month {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };

    int month;
    printf("Enter month number (0 = JAN, 1 = FEB, ..., 11 = DEC): ");
    scanf("%d", &month);

    if (month < 0 || month > 11) {
        printf("Invalid month.\n");
        return 1;
    }

    switch (month) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("31 days\n");
            break;

        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("30 days\n");
            break;

        case FEBRUARY:
            printf("28 or 29 days\n");
            break;
    }

    return 0;
}
