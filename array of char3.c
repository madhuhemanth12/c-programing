#include <stdio.h>

void reverseString(char str[]) {
    // Finding the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Reversing the string using two-pointer approach
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swapping characters at the start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    // Reading input string from the user
    scanf("%s", inputString);

    // Reversing the input string
    reverseString(inputString);

    // Displaying the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}
