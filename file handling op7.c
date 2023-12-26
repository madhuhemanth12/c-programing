 #include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Open the file in write mode
    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Input data to write into the file
    printf("Enter data to write into the file:\n");
    gets(data);

    // Write data into the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    printf("Data written to the file successfully.\n");

    return 0;
}
b) #include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Open the file in read mode
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read data from the file
    fscanf(file, "%[^\n]", data);

    // Close the file
    fclose(file);

    // Display the read data
    printf("Data read from the file:\n%s\n", data);

    return 0;
}
c) #include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Open the file in append mode
    file = fopen("example.txt", "a");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Input data to append to the file
    printf("Enter data to append to the file:\n");
    gets(data);

    // Append data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    printf("Data appended to the file successfully.\n");

    return 0;
}


