#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    char name[MAX][50], branch[MAX][50];
    int roll[MAX], age[MAX];
    int n = 0;
    int choice;

    do
    {
        printf("\n===== Student Record System =====");
        printf("\n1. Add Student Record");
        printf("\n2. Display All Records");
        printf("\n3. Search Student");
        printf("\n4. Delete Student Record");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Age: ");
                scanf("%d", &age[n]);

                printf("Enter Branch: ");
                scanf(" %[^\n]", branch[n]);

                n++;

                printf("Record added successfully!\n");
                break;


            case 2:
                if(n == 0)
                {
                    printf("\nNo records available!\n");
                }
                else
                {
                    printf("\nStudent Records:\n");

                    for(int i = 0; i < n; i++)
                    {
                        printf("\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nAge: %d", age[i]);
                        printf("\nBranch: %s", branch[i]);
                        printf("\n-------------------");
                    }
                }
                break;


            case 3:
            {
                int r, found = 0;

                printf("\nEnter Roll Number to search: ");
                scanf("%d", &r);

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        printf("\nRecord Found:");
                        printf("\nName: %s", name[i]);
                        printf("\nAge: %d", age[i]);
                        printf("\nBranch: %s\n", branch[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Record not found!\n");

                break;
            }


            case 4:
            {
                int r, found = 0;

                printf("\nEnter Roll Number to delete: ");
                scanf("%d", &r);

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        for(int j = i; j < n-1; j++)
                        {
                            roll[j] = roll[j+1];
                            age[j] = age[j+1];

                            strcpy(name[j], name[j+1]);
                            strcpy(branch[j], branch[j+1]);
                        }

                        n--;
                        found = 1;

                        printf("Record deleted successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("Record not found!\n");

                break;
            }


            case 5:
                printf("Exiting program...");
                break;


            default:
                printf("Invalid choice!");
        }

    } while(choice != 5);

    return 0;
}