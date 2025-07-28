#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 50

int main() {
    char paragraph[5000];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int count[MAX_WORDS] = {0};
    int wordCount = 0;

    printf("Enter a paragraph:\n");
    fgets(paragraph, sizeof(paragraph), stdin);

    // Tokenize input
    char *token = strtok(paragraph, " ,.!?\n\r\t");

    while (token != NULL) {
        // Convert to lowercase
        for (int i = 0; token[i]; i++) token[i] = tolower(token[i]);

        // Check if the word exists
        int found = 0;
        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i], token) == 0) {
                count[i]++;
                found = 1;
                break;
            }
        }

        // If not found, add to list
        if (!found && wordCount < MAX_WORDS) {
            strcpy(words[wordCount], token);
            count[wordCount]++;
            wordCount++;
        }

        token = strtok(NULL, " ,.!?\n\r\t");
    }

    printf("\nWord Frequencies:\n");
    for (int i = 0; i < wordCount; i++)
        printf("%s: %d\n", words[i], count[i]);

    return 0;
}
