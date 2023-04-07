#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int roll_no;
    char stud_name[50];
    int mark1, mark2, mark3;
    int total_marks;
    float avg_marks;
};

void calculateMarks(struct Student *stud) {
    stud->total_marks = stud->mark1 + stud->mark2 + stud->mark3;
    stud->avg_marks = stud->total_marks / 3.0;
}

void sortStudents(struct Student *students, int count) {
    int i, j;
    struct Student temp;
    
    for(i = 0; i < count-1; i++) {
        for(j = i+1; j < count; j++) {
            if(students[i].total_marks < students[j].total_marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void displayStudent(struct Student stud) {
    printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n",
           stud.roll_no, stud.stud_name,
           stud.mark1, stud.mark2, stud.mark3,
           stud.total_marks, stud.avg_marks);
}

void displayStudents(struct Student *students, int count) {
    int i;
    printf("Roll No\tStudent Name\tMark1\tMark2\tMark3\tTotal Marks\tAvg Marks\n");
    for(i = 0; i < count; i++) {
        displayStudent(students[i]);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count, i;
    
    printf("Enter number of students: ");
    scanf("%d", &count);
    
    for(i = 0; i < count; i++) {
        struct Student *stud = &students[i];
        printf("Enter details of student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &stud->roll_no);
        printf("Student Name: ");
        scanf("%s", stud->stud_name);
        printf("Mark1: ");
        scanf("%d", &stud->mark1);
        printf("Mark2: ");
        scanf("%d", &stud->mark2);
        printf("Mark3: ");
        scanf("%d", &stud->mark3);
        calculateMarks(stud);
    }
    
    sortStudents(students, count);
    
    printf("\nStudent records sorted in descending order of marks:\n");
    displayStudents(students, count);
    
    return 0;
}
