#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 51 // 50 characters + null terminator

void freeWordArray(char** words, int wordCount) {
    for (int i = 0; i < wordCount; i++) {
        free(words[i]);
    }
    free(words);
}

char** buildWordArray(const char* filename, int* wordCount) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return NULL;
    }

    int capacity = 10;
    char** words = (char**)malloc(capacity * sizeof(char*));
    if (words == NULL) {
        printf("Memory allocation error\n");
        fclose(file);
        return NULL;
    }

    *wordCount = 0;
    char word[MAX_WORD_LENGTH];

    while (fscanf(file, "%50s", word) == 1) {
        if (*wordCount >= capacity) {
            capacity++;
            char** temp = (char**)realloc(words, capacity * sizeof(char*));

            if (temp == NULL) {
                printf("Memory allocation error\n");
                fclose(file);
                freeWordArray(words, *wordCount);
                return NULL;
            }

            words = temp;
        }

        words[*wordCount] = (char*)malloc((strlen(word) + 1) * sizeof(char));
        if (words[*wordCount] == NULL) {
            printf("Memory allocation error\n");
            fclose(file);
            freeWordArray(words, *wordCount);
            return NULL;
        }
        strcpy(words[*wordCount], word);
        (*wordCount)++;
    }

    fclose(file);
    return words;
}

void writeWordsToFile(const char* filename, char** words, int wordCount) {
    if (wordCount == 0) return;

    FILE* file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return;
    }

    fwrite(words[0], sizeof(char), strlen(words[0]), file);
    char lastChar = words[0][strlen(words[0]) - 1];

    for (int i = 1; i < wordCount; i++) {
        if (words[i][0] == lastChar) {
            char space = ' ';
            fwrite(&space, sizeof(char), 1, file);
            fwrite(words[i], sizeof(char), strlen(words[i]), file);
            lastChar = words[i][strlen(words[i]) - 1];
        }
    }

    fclose(file);
}

void displayBinaryFile(const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return;
    }

    printf("Binary file content:\n");

    char c;
    while (fread(&c, sizeof(char), 1, file) == 1) {
        printf("%c", c);
    }
    printf("\n");

    fclose(file);
}

int main() {
    const char* inputFile = "input.txt";
    const char* outputFile = "output.bin";
    int wordCount = 0;

    char** words = buildWordArray(inputFile, &wordCount);
    if (words == NULL) {
        printf("Failed to build word array\n");
        return 1;
    }

    printf("Selected words:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s ", words[i]);
    }
    printf("\n\n");

    writeWordsToFile(outputFile, words, wordCount);

    displayBinaryFile(outputFile);

    freeWordArray(words, wordCount);

    return 0;
}