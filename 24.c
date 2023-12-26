 #include <stdio.h>
#include <string.h>

// Function to check the validity of a credit card number
int isValidCreditCard(char *creditCardNumber) {
    int len = strlen(creditCardNumber);
    int sum = 0;

    // Start with the rightmost digit (last character in the string)
    for (int i = len - 1; i >= 0; i--) {
        int digit = creditCardNumber[i] - '0';

        // Multiply every other digit by 2
        if ((len - i) % 2 == 0) {
            digit *= 2;

            // Subtract 9 from any number larger than 10
            if (digit > 9) {
                digit -= 9;
            }
        }

        // Add the digit to the sum
        sum += digit;
    }

    // Check if the sum is divisible by 10
    return (sum % 10 == 0);
}

int main() {
    char creditCardNumber[17];

    // Input the credit card number
    printf("Enter the 16-digit credit card number (without spaces): ");
    scanf("%s", creditCardNumber);

    // Check the validity of the credit card number
    if (strlen(creditCardNumber) == 16 && isValidCreditCard(creditCardNumber)) {
        printf("The credit card number is valid.\n");
    } else {
        printf("The credit card number is not valid.\n");
    }

    return 0;
}
