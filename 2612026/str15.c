#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char *ext;

    scanf("%s", filename);

    ext = strrchr(filename, '.');

    if (ext != NULL && strcmp(ext, ".txt") == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}