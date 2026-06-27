#include <stdio.h>
#include <string.h>

#define MAX 50

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

struct Employee employees[MAX];
int count = 0;

void addEmployee() {
    if (count >= MAX) {
        printf("Cannot add more employees.\n");
        return;
    }
    printf("Enter Employee ID: ");
    scanf("%d", &employees[count].id);
    printf("Enter Name: ");
    scanf("%s", employees[count].name);
    printf("Enter Department: ");
    scanf("%s", employees[count].department);
    printf("Enter Salary: ");
    scanf("%f", &employees[count].salary);
    count++;
    printf("Employee added successfully!\n");
}

void displayEmployees() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    printf("\nID\tName\t\tDepartment\tSalary\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

void searchEmployee() {
    int id, found = 0;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Found: %s, Department: %s, Salary: %.2f\n", employees[i].name, employees[i].department, employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) printf("Employee not found.\n");
}

void updateEmployee() {
    int id, found = 0;
    printf("Enter Employee ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Enter new Name: ");
            scanf("%s", employees[i].name);
            printf("Enter new Department: ");
            scanf("%s", employees[i].department);
            printf("Enter new Salary: ");
            scanf("%f", &employees[i].salary);
            found = 1;
            printf("Employee updated successfully.\n");
            break;
        }
    }
    if (!found) printf("Employee not found.\n");
}

void deleteEmployee() {
    int id, found = 0;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            count--;
            found = 1;
            printf("Employee deleted successfully.\n");
            break;
        }
    }
    if (!found) printf("Employee not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}