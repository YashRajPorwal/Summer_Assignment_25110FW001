#include <stdio.h>
#include <string.h>
#define MAX 100
// Global arrays
char customerName[MAX][50];
char roomType[MAX][20];
int roomNo[MAX];
int days[MAX];
float bill[MAX];

int count = 0;


// Function declarations
void addBooking();
void displayBookings();
void searchBooking();
void checkout();


// Add booking function
void addBooking()
{
    printf("\nEnter Room Number: ");
    scanf("%d", &roomNo[count]);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName[count]);

    printf("Enter Room Type (Single/Double): ");
    scanf(" %[^\n]", roomType[count]);

    printf("Enter Number of Days: ");
    scanf("%d", &days[count]);

    // Bill calculation
    if(strcmp(roomType[count], "Single") == 0)
        bill[count] = days[count] * 1500;
    else
        bill[count] = days[count] * 2500;

    count++;

    printf("\nRoom booked successfully!\n");
}


// Display bookings function
void displayBookings()
{
    if(count == 0)
    {
        printf("\nNo bookings available!\n");
        return;
    }

    printf("\n===== Hotel Booking Records =====\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nRoom Number: %d", roomNo[i]);
        printf("\nCustomer Name: %s", customerName[i]);
        printf("\nRoom Type: %s", roomType[i]);
        printf("\nDays Stayed: %d", days[i]);
        printf("\nTotal Bill: %.2f", bill[i]);
        printf("\n-----------------------------");
    }
}


// Search booking function
void searchBooking()
{
    int r, found = 0;

    printf("\nEnter Room Number to search: ");
    scanf("%d", &r);

    for(int i = 0; i < count; i++)
    {
        if(roomNo[i] == r)
        {
            printf("\nBooking Found:");
            printf("\nCustomer Name: %s", customerName[i]);
            printf("\nRoom Type: %s", roomType[i]);
            printf("\nDays: %d", days[i]);
            printf("\nBill: %.2f\n", bill[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBooking not found!\n");
}


// Checkout function
void checkout()
{
    int r, found = 0;

    printf("\nEnter Room Number for checkout: ");
    scanf("%d", &r);

    for(int i = 0; i < count; i++)
    {
        if(roomNo[i] == r)
        {
            printf("\nCustomer %s checked out successfully!", customerName[i]);

            for(int j = i; j < count - 1; j++)
            {
                roomNo[j] = roomNo[j+1];
                days[j] = days[j+1];
                bill[j] = bill[j+1];

                strcpy(customerName[j], customerName[j+1]);
                strcpy(roomType[j], roomType[j+1]);
            }

            count--;
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBooking not found!");
}


// Main function
int main()
{
    int choice;

    do
    {
        printf("\n\n===== Hotel Management System =====");
        printf("\n1. Add Booking");
        printf("\n2. Display Bookings");
        printf("\n3. Search Booking");
        printf("\n4. Checkout");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBooking();
                break;

            case 2:
                displayBookings();
                break;

            case 3:
                searchBooking();
                break;

            case 4:
                checkout();
                break;

            case 5:
                printf("\nExiting Hotel Management System...");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while(choice != 5);

    return 0;
}