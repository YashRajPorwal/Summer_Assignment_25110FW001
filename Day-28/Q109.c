#include<stdio.h>
#include<string.h>
struct Book{
    int id;
    char name[50];
    char author[50];
    int issued;
};


int main(){
    struct Book books[100];
    int count=0;
    int choice,id,found,i;

    while(1){
        printf("\n----- LIBRARY MANAGEMENT SYSTEM -----\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("enter your choice : \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter Book ID: ");
            scanf("%d",&books[count].id);

            printf("Enter Book Name: ");
            scanf("%[^\n]",books[count].name);

            printf("Enter Author Name: ");
            scanf("%[^\n]",books[count].author);

            books[count].issued=0;
            count++;

            printf("Book Added Successfully\n");
            break;

            case 2:
            printf("\n-----BOOK LIST-----\n");

            if(count==0){
                printf("No Books Available\n");
            }
            else{
                for(i=0;i<count;i++){
                    printf("\Book ID: %d",books[i].id);
                    printf("\nBook Name: %s",books[i].name);
                    printf("\nauthor: %s",books[i].author);

                    if(books[i].issued){
                        printf("\nStatus: Issued\n");
                    }
                    else{
                        printf("\nStatus: Available\n");
                    }
                }
            }
            break;

            case 3:
            printf("\nEnter Book ID to search: ");
            scanf("%d",&id);

            found=0;
            for(i=0;i<count;i++){
                if(books[i].id==id){
                    printf("\nBook Found\n");
                    printf("\nName: %s",books[i].name);
                    printf("\nAuthor: %s\n",books[i].author);
                    found=1;
                    break;
                }
            }
            if(!found){
                printf("Book Not Found\n");
            }
            break;

            case 4:
            printf("\nEnter Book ID to issue: ");
            scanf("%d",&id);
            found=0;

            for(i=0;i<count;i++){
                if(books[i].id==id){
                    found=1;
                    if(books[i].issued){
                        printf("Book Already Issued\n");
                    }
                    else{
                        books[i].issued=1;
                        printf("Book Issued Successfully\n");
                    }
                    break;
                }
            }
            if(!found){
                printf("Book Not Found\n");
            }
            break;

            case 5:
            printf("\nEnter Book ID to return: ");
            scanf("%d",&id);
            found=0;

            for(i=0;i<count;i++){
                if(books[i].id==id){
                    found=1;
                    if(books[i].issued){
                        books[i].issued=0;
                        printf("Book Returned Successfully\n");
                    }
                    else{
                        printf("Book Was Not Returned\n");
                    }
                    break;
                }
            }
            if(!found){
                printf("Book Not Found\n");
            }
            break;

            case 6:
            printf("Exiting Library System...\n");
            return 0;

            default:
            printf("Invalid Choice\n");

        }
    }
    return 0;
}