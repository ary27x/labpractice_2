#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char str[MAX_LEN];

    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
