#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int roll_no;
    char name[100];
} Student;

void create_text_file() 
{
    FILE *file = fopen("fileECEA.txt", "w");

    if (file == NULL) 
    {
        printf("Error: unable to open file");
        exit(1);
    }
    
    // Write personal data
    fprintf(file, "I am a C programmer and I enjoy writing code in C language.\n");
    
    // Write struct data
    Student student;
    student.roll_no = 2;
    strcpy(student.name, "Berson Meshak J");
    fwrite(&student, sizeof(student), 1, file);
    
    // Calculate file checksum
    int checksum = 0;
    fseek(file, 0, SEEK_SET);
    while (!feof(file)) 
    {
        char ch;
        fread(&ch, 1, 1, file);
        checksum += ch;
    }
    
    // Append file checksum
    fprintf(file, "\nChecksum: %d\n", checksum);
    
    // Append table of numbers
    fprintf(file, "\ntwo table from 1 to 50:\n");
    for (int i = 1; i <= 50; i++)
    {
        int j;
        j = 2*i;
        fprintf(file, "2 * i = %d\n", j);
    }

    fclose(file);
}

int main() 
{
    create_text_file();
    return 0;
}