#include<stdio.h>

// Defining structure for employee
struct Employee {
    int empID;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main() {
    // Creating an instance of Employee structure
    struct Employee emp;
    
    // Accepting employee details from user
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empID);
    
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    
    printf("Enter Employee Designation: ");
    scanf("%s", emp.designation);
    
    printf("Enter Employee Department: ");
    scanf("%s", emp.department);
    
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    
    // Displaying employee details
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.empID);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    
    return 0;
}
