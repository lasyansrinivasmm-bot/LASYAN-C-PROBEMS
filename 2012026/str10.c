#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    // Read the input sentence
    fgets(str, sizeof(str), stdin);

    // Capitalize the first character if it is a lowercase letter
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = toupper(str[0]);
    }

    // Print the result
    printf("%s", str);

    return 0;
}