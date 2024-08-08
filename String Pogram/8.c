#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof str, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);  // Convert to lowercase for case-insensitive counting
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        } else if (isalpha(str[i])) {  // Check if it's an alphabet but not a vowel
            consonants++;
        }
    }

    printf("The number of vowels: %d\n", vowels);
    printf("The number of consonants: %d\n", consonants);

    return 0;
}

