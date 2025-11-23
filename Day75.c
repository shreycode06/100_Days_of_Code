#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter a line to append: ");
    getchar();  // to clear leftover newline
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    printf("Text added to the file.\n");

    fclose(fp);
    return 0;
}
