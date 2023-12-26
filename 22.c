) #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Custom comparison function for sorting integers to maximize the resulting value
int compare(const void *a, const void *b) {
    char str1[20], str2[20];
    sprintf(str1, "%d%d", *(int*)a, *(int*)b);
    sprintf(str2, "%d%d", *(int*)b, *(int*)a);
    return strcmp(str2, str1);
}

// Function to print the largest integer that can be made from an array of distinct integers
void printLargestInteger(int arr[], int n) {
    // Sort the array using the custom comparison function
    qsort(arr, n, sizeof(int), compare);

    // Concatenate the sorted integers to form the largest integer
    printf("The largest integer: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements for the array
    printf("Enter %d distinct integers from the range [0, 10000]:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to print the largest integer
    printLargestInteger(arr, n);

    return 0;
}

