#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    char bookName[MAX][50], author[MAX][50];
    int bookId[MAX], issued[MAX];
    int n = 0;
    int choice;

    do
    {
        printf("\n===== Mini Library System =====");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Delete Book");
        printf("\n7. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", bookName[n]);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", author[n]);

                issued[n] = 0;

                n++;

                printf("Book added successfully!\n");
                break;


            case 2:
                if(n == 0)
                {
                    printf("\nNo books available!\n");
                }
                else
                {
                    printf("\nLibrary Books:\n");

                    for(int i = 0; i < n; i++)
                    {
                        printf("\nBook ID: %d", bookId[i]);
                        printf("\nBook Name: %s", bookName[i]);
                        printf("\nAuthor: %s", author[i]);

                        if(issued[i] == 1)
                            printf("\nStatus: Issued");
                        else
                            printf("\nStatus: Available");

                        printf("\n--------------------");
                    }
                }
                break;


            case 3:
            {
                int id, found = 0;

                printf("\nEnter Book ID to search: ");
                scanf("%d", &id);

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        printf("\nBook Found:");
                        printf("\nName: %s", bookName[i]);
                        printf("\nAuthor: %s\n", author[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found!\n");

                break;
            }


            case 4:
            {
                int id, found = 0;

                printf("\nEnter Book ID to issue: ");
                scanf("%d", &id);

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        if(issued[i] == 0)
                        {
                            issued[i] = 1;
                            printf("Book issued successfully!\n");
                        }
                        else
                        {
                            printf("Book already issued!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found!\n");

                break;
            }


            case 5:
            {
                int id, found = 0;

                printf("\nEnter Book ID to return: ");
                scanf("%d", &id);

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        issued[i] = 0;
                        printf("Book returned successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found!\n");

                break;
            }


            case 6:
            {
                int id, found = 0;

                printf("\nEnter Book ID to delete: ");
                scanf("%d", &id);

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        for(int j = i; j < n-1; j++)
                        {
                            bookId[j] = bookId[j+1];
                            issued[j] = issued[j+1];

                            strcpy(bookName[j], bookName[j+1]);
                            strcpy(author[j], author[j+1]);
                        }

                        n--;
                        found = 1;

                        printf("Book deleted successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found!\n");

                break;
            }


            case 7:
                printf("Exiting Library System...");
                break;


            default:
                printf("Invalid choice!");
        }

    } while(choice != 7);

    return 0;
}