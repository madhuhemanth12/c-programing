#include <stdio.h>

// Function to perform linear search in an array
int linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int array[100], size, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Input the key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform linear search
    int result = linearSearch(array, size, key);

    // Display the result
    if (result != -1) {
        printf("Key %d found at index %d.\n", key, result);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}


