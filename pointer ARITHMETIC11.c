 #include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // a. Increment a pointer
    printf("a. Increment a pointer: *(ptr++) = %d\n", *(ptr++));

    // Reset pointer to the beginning of the array
    ptr = arr;

    // b. Decrement a pointer
    printf("b. Decrement a pointer: *(ptr--) = %d\n", *(ptr--));

    // Reset pointer to the beginning of the array
    ptr = arr;

    // c. Add an integer to a pointer
    printf("c. Add an integer to a pointer: *(ptr + 2) = %d\n", *(ptr + 2));

    // d. Subtract an integer from a pointer
    printf("d. Subtract an integer from a pointer: *(ptr - 1) = %d\n", *(ptr - 1));

    // e. Subtract two pointers of the same type
    int *ptr2 = arr + 3;
    printf("e. Subtract two pointers of the same type: ptr2 - ptr = %ld\n", ptr2 - ptr);

    return 0;
}

