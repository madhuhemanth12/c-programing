)#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString); // Note: gets() is used for simplicity; in a real program, consider using fgets().

    if (isPalindrome(inputString)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString); // Note: gets() is used for simplicity; in a real program, consider using fgets().

    int length = strlen(inputString);

    printf("Length of the string: %d\n", length);

    return 0;
}
b) #include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString); // Note: gets() is used for simplicity; in a real program, consider using fgets().

    int length = strlen(inputString);

    printf("Length of the string: %d\n", length);

    return 0;
}
c) #include <stdio.h>
#include <string.h>

int main() {
    char firstString[100], secondString[100];

    printf("Enter the first string: ");
    gets(firstString); // Note: gets() is used for simplicity; in a real program, consider using fgets().

    printf("Enter the second string: ");
    gets(secondString);

    // Using strcat() to concatenate the strings
    strcat(firstString, secondString);

    printf("Concatenated string: %s\n", firstString);

    return 0;
}

        
