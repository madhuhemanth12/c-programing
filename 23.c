 #include <stdio.h>
#include <string.h>

// Define a structure to represent a person with name and address
struct Person {
    char name[50];
    char address[100];
};

// Function to compare two names for sorting
int compareNames(const void *a, const void *b) {
    return strcmp(((struct Person *)a)->name, ((struct Person *)b)->name);
}

int main() {
    int n;

    // Input the number of persons
    printf("Enter the number of persons: ");
    scanf("%d", &n);

    // Declare an array of structures to store persons' information
    struct Person persons[n];

    // Input names and addresses
    printf("Enter names and corresponding addresses:\n");
    for (int i = 0; i < n; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", persons[i].name);
        printf("Address: ");
        scanf("%s", persons[i].address);
    }

    // Sort the names alphabetically
    qsort(persons, n, sizeof(struct Person), compareNames);

    // Display the alphabetically sorted names and corresponding addresses
    printf("\nAlphabetically Sorted Names and Addresses:\n");
    for (int i = 0; i < n; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", persons[i].name);
        printf("Address: %s\n", persons[i].address);
    }

    return 0;
}

