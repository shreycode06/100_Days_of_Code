#include <stdio.h>

int main() {
    char source[100], destination[100];
    FILE *srcFile, *destFile;
    int ch;

    printf("Enter the name of the source file: ");
    scanf("%s", source);

    printf("Enter the name of the destination file: ");
    scanf("%s", destination);

    srcFile = fopen(source, "r");
    if (srcFile == NULL) {
        printf("Couldn't open the source file.\n");
        return 1;
    }

    destFile = fopen(destination, "w");
    if (destFile == NULL) {
        printf("Couldn't open the destination file.\n");
        fclose(srcFile);
        return 1;
    }

    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    fclose(srcFile);
    fclose(destFile);

    return 0;
}
