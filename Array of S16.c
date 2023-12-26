 #include <stdio.h>

// Define a structure to represent an employee
struct Employee {
    int empID;
    char empName[50];
    float empSalary;
};

int main() {
    int n; // Number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of structures to store employee information
    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empID);

        printf("Employee Name: ");
        scanf("%s", employees[i].empName);

        printf("Employee Salary: ");
        scanf("%f", &employees[i].empSalary);
    }

    // Display employee details
    printf("\nEmployee Database:\n");
    printf("%-10s %-20s %-15s\n", "Employee ID", "Employee Name", "Employee Salary");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-15.2f\n", employees[i].empID, employees[i].empName, employees[i].empSalary);
    }

    return 0;
}


