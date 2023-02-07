// Create an array of structs which store student information

#include <stdio.h>

struct student {
    char name[20];
    int age;
    int id;
    float GPA;
    char* grade_level;
}; 
typedef struct student Student;

int main() {
    Student students[2];
    int i;
    for (i = 0; i < 2; i++) {
        printf("Enter student name: ");
        scanf("%s", students[i].name);
        printf("Enter student age: ");
        scanf("%d", &students[i].age);
        printf("Enter student id: ");
        scanf("%d", &students[i].id);
        printf("Enter student GPA: ");
        scanf("%f", &students[i].GPA);
    }

    for (i = 0; i < 2; i++) {
        printf("Student %d\n", i + 1);
    }
}