#include <stdio.h>
int main()
{
    int arr[100], n, choice, i, element, pos, search, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n----- ARRAY OPERATIONS MENU -----\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array elements are:\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                break;

            case 2:
                printf("Enter element to insert: ");
                scanf("%d", &element);

                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);

                if(pos >= 0 && pos <= n)
                {
                    for(i = n; i > pos; i--)
                    {
                        arr[i] = arr[i-1];
                    }

                    arr[pos] = element;
                    n++;

                    printf("Element inserted successfully!");
                }
                else
                {
                    printf("Invalid position!");
                }
                break;

            case 3:
                printf("Enter position to delete (0 to %d): ", n-1);
                scanf("%d", &pos);

                if(pos >= 0 && pos < n)
                {
                    for(i = pos; i < n-1; i++)
                    {
                        arr[i] = arr[i+1];
                    }

                    n--;

                    printf("Element deleted successfully!");
                }
                else
                {
                    printf("Invalid position!");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == search)
                    {
                        printf("Element found at position %d", i);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Element not found!");
                }
                break;

            case 5:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 5);

    return 0;
}