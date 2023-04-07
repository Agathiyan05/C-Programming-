#include <stdio.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student s;
    
    printf("Enter student name: ");
    scanf("%s", s.name);
    
    printf("Enter GPA: ");
    scanf("%f", &s.gpa);
    
    printf("Name: %s\nGPA: %.2f\n", s.name, s.gpa);
    
    return 0;
}
