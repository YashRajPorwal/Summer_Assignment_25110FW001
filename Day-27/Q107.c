#include <stdio.h>
#include <string.h>

#define MAX 50

struct Salary {
    int id;
    char name[50];
    float basic;
    float allowance;
    float deduction;
    float netSalary;
};

struct Salary records[MAX];
int count = 0;

void calculateNet(int i) {
    float gross = records[i].basic + records[i].allowance;
    records[i].netSalary = gross - records[i].deduction;
}

void addRecord() {
    if (count >= MAX) {
        printf("Cannot add more records.\n");
        return;
    }
    printf("Enter Employee ID: ");
    scanf("%d", &records[count].id);
    printf("Enter Name: ");
    scanf("%s", records[count].name);
    printf("Enter Basic Salary: ");
    scanf("%f", &records[count].basic);
    printf("Enter Allowance: ");
    scanf("%f", &records[count].allowance);
    printf("Enter Deduction: ");
    scanf("%f", &records[count].deduction);

    calculateNet(count);
    count++;
    printf("Salary record added successfully!\n");
}

void displayRecords() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    printf("\nID\tName\t\tBasic\tAllowance\tDeduction\tNet Salary\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\t%.2f\t\t%.2f\t\t%.2f\n",
               records[i].id, records[i].name, records[i].basic,
               records[i].allowance, records[i].deduction, records[i].netSalary);
    }
}

void searchRecord() {
    int id, found = 0;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (records[i].id == id) {
            printf("Name: %s\n", records[i].name);
            printf("Basic: %.2f | Allowance: %.2f | Deduction: %.2f\n",
                   records[i].basic, records[i].allowance, records[i].deduction);
            printf("Net Salary: %.2f\n", records[i].netSalary);
            found = 1;
            break;
        }
    }
    if (!found) printf("Record not found.\n");
}

void updateRecord() {
    int id, found = 0;
    printf("Enter Employee ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (records[i].id == id) {
            printf("Enter new Basic Salary: ");
            scanf("%f", &records[i].basic);
            printf("Enter new Allowance: ");
            scanf("%f", &records[i].allowance);
            printf("Enter new Deduction: ");
            scanf("%f", &records[i].deduction);

            calculateNet(i);
            found = 1;
            printf("Record updated successfully.\n");
            break;
        }
    }
    if (!found) printf("Record not found.\n");
}

void deleteRecord() {
    int id, found = 0;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (records[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                records[j] = records[j + 1];
            }
            count--;
            found = 1;
            printf("Record deleted successfully.\n");
            break;
        }
    }
    if (!found) printf("Record not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Record\n");
        printf("4. Update Record\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRecord(); break;
            case 2: displayRecords(); break;
            case 3: searchRecord(); break;
            case 4: updateRecord(); break;
            case 5: deleteRecord(); break;
            case 6: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}