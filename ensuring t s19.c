 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enum to represent data types
typedef enum {
    INTEGER,
    FLOAT,
    CHARACTER,
    STRING
} DataType;

// Struct for the generic data container
typedef struct {
    DataType type;
    void* data;
} DataContainer;

// Function to set data in the container
void setData(DataContainer* container, DataType type, void* data) {
    container->type = type;

    // Allocate memory and copy data based on the data type
    switch (type) {
        case INTEGER:
            container->data = malloc(sizeof(int));
            *(int*)(container->data) = *(int*)data;
            break;
        case FLOAT:
            container->data = malloc(sizeof(float));
            *(float*)(container->data) = *(float*)data;
            break;
        case CHARACTER:
            container->data = malloc(sizeof(char));
            *(char*)(container->data) = *(char*)data;
            break;
        case STRING:
            container->data = strdup((char*)data);
            break;
        default:
            printf("Invalid data type.\n");
            break;
    }
}

// Function to get data from the container
void getData(DataContainer* container, void* result) {
    if (container->type == INTEGER || container->type == FLOAT || container->type == CHARACTER) {
        memcpy(result, container->data, sizeof(int));
    } else if (container->type == STRING) {
        strcpy((char*)result, (char*)container->data);
    } else {
        printf("Invalid data type.\n");
    }
}

// Function to free memory allocated for data in the container
void freeData(DataContainer* container) {
    if (container->type == STRING) {
        free(container->data);
    }
    free(container->data);
}

int main() {
    // Example usage of the generic data container
    DataContainer container;

    // Set integer data
    int intValue = 42;
    setData(&container, INTEGER, &intValue);

    // Get and display integer data
    int resultInt;
    getData(&container, &resultInt);
    printf("Integer value: %d\n", resultInt);

    // Set string data
    char stringValue[] = "Hello, World!";
    setData(&container, STRING, stringValue);

    // Get and display string data
    char resultString[50];
    getData(&container, resultString);
    printf("String value: %s\n", resultString);

    // Free memory allocated for data in the container
    freeData(&container);

    return 0;
}
