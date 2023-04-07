#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n, i, maxIndex;
    float maxSalary;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee name: ");
        scanf("%s", employees[i].ename);
        printf("Employee salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find employee with highest salary
    maxSalary = employees[0].salary;
    maxIndex = 0;
    for(i = 1; i < n; i++) {
        if(employees[i].salary > maxSalary) {
            maxSalary = employees[i].salary;
            maxIndex = i;
        }
    }

    // Display details of employee with highest salary
    printf("\nDetails of employee with highest salary:\n");
    printf("Employee number: %d\n", employees[maxIndex].eno);
    printf("Employee name: %s\n", employees[maxIndex].ename);
    printf("Employee salary: %.2f\n", employees[maxIndex].salary);

    return 0;
}
