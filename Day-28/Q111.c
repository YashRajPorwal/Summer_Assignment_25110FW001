#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketID;
    char name[50];
    int age;
    int seatNumber;
};

int main() {

    struct Ticket t[100];

    int choice;
    int count = 0;
    int id, i, found;

    while(1) {

        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Cancel Booking\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice) {


            case 1:

                printf("\nEnter Ticket ID: ");
                scanf("%d", &t[count].ticketID);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t[count].name);

                printf("Enter Age: ");
                scanf("%d", &t[count].age);

                t[count].seatNumber = count + 1;

                printf("Seat Number Allocated: %d\n", t[count].seatNumber);

                count++;

                printf("Ticket Booked Successfully!\n");

                break;



            case 2:

                if(count == 0) {
                    printf("No Bookings Available\n");
                }
                else {

                    printf("\n----- BOOKING DETAILS -----\n");

                    for(i=0; i<count; i++) {

                        printf("\nTicket ID: %d", t[i].ticketID);
                        printf("\nPassenger Name: %s", t[i].name);
                        printf("\nAge: %d", t[i].age);
                        printf("\nSeat Number: %d\n", t[i].seatNumber);

                    }
                }

                break;



            case 3:

                printf("\nEnter Ticket ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i=0; i<count; i++) {

                    if(t[i].ticketID == id) {

                        printf("\nBooking Found!");
                        printf("\nPassenger Name: %s", t[i].name);
                        printf("\nSeat Number: %d\n", t[i].seatNumber);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Booking Not Found\n");

                break;



            case 4:

                printf("\nEnter Ticket ID to Cancel: ");
                scanf("%d", &id);

                found = 0;

                for(i=0; i<count; i++) {

                    if(t[i].ticketID == id) {

                        found = 1;

                        for(int j=i; j<count-1; j++) {
                            t[j] = t[j+1];
                        }

                        count--;

                        printf("Ticket Cancelled Successfully!\n");

                        break;
                    }
                }

                if(found == 0)
                    printf("Ticket Not Found\n");

                break;



            case 5:

                printf("Thank you for using Ticket Booking System!");
                return 0;


            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}