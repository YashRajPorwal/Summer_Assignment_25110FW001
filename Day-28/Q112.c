#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {

    struct Contact contacts[100];

    int choice;
    int count = 0;
    int i, found;
    char searchName[50];


    while(1) {

        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice) {


            // Add Contact
            case 1:

                printf("\nEnter Name: ");
                scanf(" %[^\n]", contacts[count].name);

                printf("Enter Phone Number: ");
                scanf("%s", contacts[count].phone);

                printf("Enter Email: ");
                scanf("%s", contacts[count].email);


                count++;

                printf("Contact Added Successfully!\n");

                break;



            // Display Contacts
            case 2:

                if(count == 0) {
                    printf("No Contacts Available\n");
                }

                else {

                    printf("\n----- CONTACT LIST -----\n");

                    for(i = 0; i < count; i++) {

                        printf("\nContact %d", i+1);
                        printf("\nName: %s", contacts[i].name);
                        printf("\nPhone: %s", contacts[i].phone);
                        printf("\nEmail: %s\n", contacts[i].email);

                    }
                }

                break;



            // Search Contact
            case 3:

                printf("\nEnter Name to Search: ");
                scanf(" %[^\n]", searchName);

                found = 0;


                for(i = 0; i < count; i++) {

                    if(strcmp(contacts[i].name, searchName) == 0) {

                        printf("\nContact Found!");
                        printf("\nName: %s", contacts[i].name);
                        printf("\nPhone: %s", contacts[i].phone);
                        printf("\nEmail: %s\n", contacts[i].email);

                        found = 1;
                        break;
                    }
                }


                if(found == 0)
                    printf("Contact Not Found\n");


                break;



            // Delete Contact
            case 4:

                printf("\nEnter Name to Delete: ");
                scanf(" %[^\n]", searchName);

                found = 0;


                for(i = 0; i < count; i++) {

                    if(strcmp(contacts[i].name, searchName) == 0) {


                        for(int j = i; j < count-1; j++) {

                            contacts[j] = contacts[j+1];

                        }


                        count--;

                        found = 1;

                        printf("Contact Deleted Successfully!\n");

                        break;
                    }
                }


                if(found == 0)
                    printf("Contact Not Found\n");


                break;



            // Exit
            case 5:

                printf("Thank you for using Contact Management System!");
                return 0;



            default:

                printf("Invalid Choice!\n");

        }

    }


    return 0;
}