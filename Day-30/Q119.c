#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    char name[MAX][50], department[MAX][50];
    int empId[MAX], age[MAX];
    float salary[MAX];

    int n = 0;
    int choice;

    do
    {
        printf("\n===== Mini Employee Management System =====");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Salary");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Age: ");
                scanf("%d", &age[n]);

                printf("Enter Department: ");
                scanf(" %[^\n]", department[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;

                printf("Employee added successfully!\n");
                break;


            case 2:
                if(n == 0)
                {
                    printf("\nNo employee records available!\n");
                }
                else
                {
                    printf("\nEmployee Records:\n");

                    for(int i = 0; i < n; i++)
                    {
                        printf("\nEmployee ID: %d", empId[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nAge: %d", age[i]);
                        printf("\nDepartment: %s", department[i]);
                        printf("\nSalary: %.2f", salary[i]);
                        printf("\n---------------------");
                    }
                }
                break;


            case 3:
            {
                int id, found = 0;

                printf("\nEnter Employee ID to search: ");
                scanf("%d", &id);

                for(int i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        printf("\nEmployee Found:");
                        printf("\nName: %s", name[i]);
                        printf("\nAge: %d", age[i]);
                        printf("\nDepartment: %s", department[i]);
                        printf("\nSalary: %.2f\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found!\n");

                break;
            }


            case 4:
            {
                int id, found = 0;
                float newSalary;

                printf("\nEnter Employee ID: ");
                scanf("%d", &id);

                for(int i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        printf("Enter new salary: ");
                        scanf("%f", &newSalary);

                        salary[i] = newSalary;

                        printf("Salary updated successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found!\n");

                break;
            }


            case 5:
            {
                int id, found = 0;

                printf("\nEnter Employee ID to delete: ");
                scanf("%d", &id);

                for(int i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        for(int j = i; j < n-1; j++)
                        {
                            empId[j] = empId[j+1];
                            age[j] = age[j+1];
                            salary[j] = salary[j+1];

                            strcpy(name[j], name[j+1]);
                            strcpy(department[j], department[j+1]);
                        }

                        n--;

                        printf("Employee deleted successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found!\n");

                break;
            }


            case 6:
                printf("Exiting Employee Management System...");
                break;


            default:
                printf("Invalid choice!");
        }

    } while(choice != 6);

    return 0;
}