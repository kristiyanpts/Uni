#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 50
#define NUM_WORDS 5

int isGuessed(char letter, char *guessed, int num_guessed) {
    for (int i = 0; i < num_guessed; i++) {
        if (guessed[i] == letter) {
            return 1;
        }
    }
    return 0;
}

int isWordGuessed(char *word, char *guessed, int num_guessed) {
    for (int i = 0; i < strlen(word); i++) {
        if (!isGuessed(word[i], guessed, num_guessed)) {
            return 0;
        }
    }
    return 1;
}

void displayWord(char *word, char *guessed, int num_guessed) {
    for (int i = 0; i < strlen(word); i++) {
        if (isGuessed(word[i], guessed, num_guessed)) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char words[NUM_WORDS][MAX_WORD_LENGTH] = {
        "programming",
        "concatenation",
        "computer",
        "algorithm",
        "software"
    };

    int word_index = rand() % NUM_WORDS;
    char *word = words[word_index];
    int word_length = strlen(word);

    char guessed[MAX_WORD_LENGTH * 2] = {0};
    int num_guesses = 0;
    int max_guesses = word_length + 2;
    int num_guessed = 0;
    int correct_guess = 0;

    printf("Welcome to Hangman!\n");
    printf("The word has %d letters.\n", word_length);
    printf("You have %d attempts to guess it.\n", max_guesses);

    while (num_guesses < max_guesses) {
        displayWord(word, guessed, num_guessed);

        printf("Guesses left: %d\n", max_guesses - num_guesses);

        printf("Enter a letter: ");
        char guess;
        scanf(" %c", &guess);
        guess = tolower(guess);

        if (isGuessed(guess, guessed, num_guessed)) {
            printf("You already guessed that letter!\n");
            continue;
        }

        guessed[num_guessed++] = guess;
        num_guesses++;

        correct_guess = 0;
        for (int i = 0; i < word_length; i++) {
            if (word[i] == guess) {
                correct_guess = 1;
            }
        }

        if (correct_guess) {
            printf("Good guess!\n");
        } else {
            printf("Letter not in the word.\n");
        }

        if (isWordGuessed(word, guessed, num_guessed)) {
            printf("\nCongratulations! You guessed the word: %s\n", word);
            printf("You used %d out of %d allowed guesses.\n", num_guesses, max_guesses);
            return 0;
        }

        printf("\n");
    }

    printf("You've run out of guesses!\n");
    printf("The word was: %s\n", word);

    return 0;
}