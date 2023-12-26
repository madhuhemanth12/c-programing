 #include <stdio.h>

void countDuplicates(int arr[], int size) {
    int duplicateCount = 0;

    // Iterate through each element in the array
    for (int i = 0; i < size - 1; i++) {
        // Check if the current element is a duplicate
        if (arr[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    // Mark the duplicate elements with -1
                    arr[j] = -1;
                    duplicateCount++;
                    printf("Duplicate found at indices %d and %d\n", i, j);
                }
            }
        }
    }

    if (duplicateCount == 0) {
        printf("No duplicates found in the array.\n");
    } else {
        printf("Total number of duplicate elements: %d\n", duplicateCount);
    }
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements for the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to count and display duplicates
    countDuplicates(arr, size);

    return 0;
}