#include <stdio.h>
#include <string.h>

#define MAX 50
#define SUBJECTS 5

struct Marksheet {
    int roll;
    char name[50];
    int marks[SUBJECTS];
    int total;
    float percentage;
    char grade;
};

struct Marksheet students[MAX];
int count = 0;

void calculateResult(int i) {
    int sum = 0;
    for (int j = 0; j < SUBJECTS; j++) {
        sum += students[i].marks[j];
    }
    students[i].total = sum;
    students[i].percentage = (float)sum / SUBJECTS;

    if (students[i].percentage >= 90)
        students[i].grade = 'A';
    else if (students[i].percentage >= 75)
        students[i].grade = 'B';
    else if (students[i].percentage >= 60)
        students[i].grade = 'C';
    else if (students[i].percentage >= 40)
        students[i].grade = 'D';
    else
        students[i].grade = 'F';
}

void addStudent() {
    if (count >= MAX) {
        printf("Cannot add more students.\n");
        return;
    }
    printf("Enter Roll Number: ");
    scanf("%d", &students[count].roll);
    printf("Enter Name: ");
    scanf("%s", students[count].name);

    printf("Enter marks for %d subjects:\n", SUBJECTS);
    for (int j = 0; j < SUBJECTS; j++) {
        printf("Subject %d: ", j + 1);
        scanf("%d", &students[count].marks[j]);
    }

    calculateResult(count);
    count++;
    printf("Marksheet record added successfully!\n");
}

void printMarksheet(int i) {
    printf("\n--------------------------------\n");
    printf("Roll Number : %d\n", students[i].roll);
    printf("Name        : %s\n", students[i].name);
    printf("--------------------------------\n");
    for (int j = 0; j < SUBJECTS; j++) {
        printf("Subject %d   : %d\n", j + 1, students[i].marks[j]);
    }
    printf("--------------------------------\n");
    printf("Total       : %d / %d\n", students[i].total, SUBJECTS * 100);
    printf("Percentage  : %.2f%%\n", students[i].percentage);
    printf("Grade       : %c\n", students[i].grade);
    printf("Result      : %s\n", students[i].grade == 'F' ? "FAIL" : "PASS");
    printf("--------------------------------\n");
}

void displayAll() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printMarksheet(i);
    }
}

void searchStudent() {
    int roll, found = 0;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printMarksheet(i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found.\n");
}

void updateStudent() {
    int roll, found = 0;
    printf("Enter Roll Number to update: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Enter new marks for %d subjects:\n", SUBJECTS);
            for (int j = 0; j < SUBJECTS; j++) {
                printf("Subject %d: ", j + 1);
                scanf("%d", &students[i].marks[j]);
            }
            calculateResult(i);
            found = 1;
            printf("Marksheet updated successfully.\n");
            break;
        }
    }
    if (!found) printf("Student not found.\n");
}

void deleteStudent() {
    int roll, found = 0;
    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            found = 1;
            printf("Record deleted successfully.\n");
            break;
        }
    }
    if (!found) printf("Student not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Marksheet Generation System ---\n");
        printf("1. Add Student Marks\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}