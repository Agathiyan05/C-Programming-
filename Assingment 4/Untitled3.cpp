#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
    char name[50];
    int roll_number;
    int birth_year;
    int birth_month;
    int birth_day;
    int admission_year;
    int admission_month;
    int admission_day;
};

int calculate_age(int birth_year, int birth_month, int birth_day, int admission_year, int admission_month, int admission_day) {
    struct tm birth_date = {0};
    birth_date.tm_year = birth_year - 1900;
    birth_date.tm_mon = birth_month - 1;
    birth_date.tm_mday = birth_day;

    struct tm admission_date = {0};
    admission_date.tm_year = admission_year - 1900;
    admission_date.tm_mon = admission_month - 1;
    admission_date.tm_mday = admission_day;

    time_t birth_time = mktime(&birth_date);
    time_t admission_time = mktime(&admission_date);

    double seconds = difftime(admission_time, birth_time);
    double years = seconds / (60 * 60 * 24 * 365.25);

    return (int) years;
}

int main() {
    struct student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter date of birth (YYYY MM DD): ");
    scanf("%d %d %d", &s.birth_year, &s.birth_month, &s.birth_day);

    printf("Enter admission date (YYYY MM DD): ");
    scanf("%d %d %d", &s.admission_year, &s.admission_month, &s.admission_day);

    int age = calculate_age(s.birth_year, s.birth_month, s.birth_day, s.admission_year, s.admission_month, s.admission_day);

    printf("Student name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll_number);
    printf("Age at the time of admission: %d\n", age);

    return 0;
}

