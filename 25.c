 #include <stdio.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to count occurrences of any two vowels in succession
int countSuccessiveVowels(char *text) {
    int count = 0;

    while (*text) {
        if (isVowel(*text) && isVowel(*(text + 1))) {
            count++;
            printf("Found: %c%c\n", *text, *(text + 1));
        }
        text++;
    }

    return count;
}

int main() {
    char text[100];

    // Input the line of text
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    // Count occurrences of any two vowels in succession
    int result = countSuccessiveVowels(text);

    // Display the result
    printf("Number of occurrences of any two vowels in succession: %d\n", result);

    return 0;
}









