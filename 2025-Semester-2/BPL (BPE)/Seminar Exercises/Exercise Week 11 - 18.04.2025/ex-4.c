#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to encode a file using the given key
int encodeFile(const char* inputFilename, const char* outputFilename, int key) {
    FILE* inputFile = fopen(inputFilename, "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input file '%s'\n", inputFilename);
        return 0;
    }

    FILE* outputFile = fopen(outputFilename, "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output file '%s'\n", outputFilename);
        fclose(inputFile);
        return 0;
    }

    int c;
    while ((c = fgetc(inputFile)) != EOF) {
        // Encode the character by adding the key value
        int encoded = c + key;
        fputc(encoded, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
    return 1;
}

int main() {
    char inputFilename[256];
    char outputFilename[270];
    int key;

    printf("Enter the name of the file to encode: ");
    scanf("%255s", inputFilename);

    strcpy(outputFilename, inputFilename);
    char* dotPosition = strrchr(outputFilename, '.');

    if (dotPosition != NULL) {
        // Insert "-encoded" before the extension
        char tempExt[10];
        strcpy(tempExt, dotPosition);
        *dotPosition = '\0';
        strcat(outputFilename, "-encoded");
        strcat(outputFilename, tempExt);
    } else {
        // No extension, just append "-encoded"
        strcat(outputFilename, "-encoded");
    }

    do {
        printf("Enter the encoding key (2-10): ");
        scanf("%d", &key);

        if (key < 2 || key > 10) {
            printf("Invalid key. Key must be between 2 and 10.\n");
        }
    } while (key < 2 || key > 10);

    if (encodeFile(inputFilename, outputFilename, key)) {
        printf("File encoded successfully. Encoded content written to '%s'\n", outputFilename);
    }

    return 0;
}